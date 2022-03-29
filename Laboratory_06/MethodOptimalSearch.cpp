#include "MethodOptimalSearch.hpp"

#include <cmath>

#include <iostream>
using namespace std;

namespace cm
{
	MethodOptimalSearch::~MethodOptimalSearch()
	{
	}

	utility::BaseType MethodOptimalSearch::solve(DataOneDimentionalMinimization *const data) const
	{
		utility::BaseType delta = data->getRightBorder() - data->getLeftBorder();
		size_t n = ceil(delta / data->getEpsilon() - 1);
		utility::BaseType h = delta / (n + 1.0L);

		utility::BaseType x = data->getLeftBorder();
		Function func = data->getFunction();
		utility::BaseType result = func(x);

		cout << "\tx = " << x << "\n";
		cout << "\ty = " << func(x) << "\n";
		cout << "\n";

		for (x += h; x < data->getRightBorder(); x += h)
		{
			utility::BaseType tmpResult = func(x);
			result = MIN(result, tmpResult);

			cout << "x = " << x << "\n";
			cout << "y = " << tmpResult << "\n";
			cout << "result = " << result << "\n";
			cout << "\n";
		}

		return result;
	}

}