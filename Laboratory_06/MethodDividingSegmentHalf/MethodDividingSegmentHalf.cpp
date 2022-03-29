#include "MethodDividingSegmentHalf.hpp"

#include <cmath>
#include <iostream>

using namespace std;

namespace cm
{

	MethodDividingSegmentHalf::~MethodDividingSegmentHalf()
	{
	}

	utility::BaseType MethodDividingSegmentHalf::solve(DataOneDimentionalMinimization *const data) const
	{
		Function func = data->getFunction();
		utility::BaseType a = data->getLeftBorder();
		utility::BaseType b = data->getRightBorder();

		utility::BaseType delta = b - a;
		size_t n = ceil(delta / data->getEpsilon() - 1);
		
		utility::BaseType s = delta / 2.1L;
		while (delta > data->getEpsilon())
		{
			utility::BaseType tmpRes = (a + b) / 2.0L;	
			utility::BaseType alpha = tmpRes - s;
			utility::BaseType beta = tmpRes + s;

			if (func(alpha) <= func(beta))
			{
				b = beta;
			}
			else
			{
				a = alpha;
			}

			delta = b - a;
			s = delta / 2.1L;

			cout << "\ta = " << a << "\n";
			cout << "\tb = " << b << "\n";
			cout << "\n";
		}

		utility::BaseType result = (a + b) / 2.0L;

		return func(result);
	}

}
