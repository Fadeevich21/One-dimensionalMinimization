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
		
		utility::BaseType s = 0.001L;
		while (delta > data->getEpsilon())
		{
			utility::BaseType tmpRes = (a + b) / 2.0L;
			utility::BaseType alpha = tmpRes - s;
			utility::BaseType beta = tmpRes + s;

			cout << "func(alpha) = " << func(alpha) << "\n";
			cout << "func(beta) = " << func(beta) << "\n";
			cout << "\n";

			if (func(alpha) <= func(beta))
			{
				b = beta;
			}
			else
			{
				a = alpha;
			}

			delta = b - a;

			cout << "a = " << a << "\n";
			cout << "b = " << b << "\n";
			cout << "\n";
		}

		utility::BaseType result = (a + b) / 2.0L;

		return func(result);
	}

}
