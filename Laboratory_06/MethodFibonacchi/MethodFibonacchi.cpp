#include "MethodFibonacchi.hpp"
#include <vector>

#include <iostream>

using namespace std;

namespace cm
{

	uint64_t fib(uint64_t n)
	{
		static vector<uint64_t> fibSequenceValues;
		if (fibSequenceValues.empty())
		{
			fibSequenceValues = vector<uint64_t>({1, 1});
		}

		if (n >= 0)
		{
			if (fibSequenceValues.size() <= n)
			{
				fibSequenceValues.resize(n + 1);
			}

			if (n > 0 && fibSequenceValues[n] == 0)
			{
				fibSequenceValues[n] = fib(n - 1) + fib(n - 2);
			}
		}
		else
		{
			n = 0;
		}

		return fibSequenceValues[n];
	}

	MethodFibonacchi::~MethodFibonacchi()
	{
	}

	utility::BaseType MethodFibonacchi::solve(DataOneDimentionalMinimization *const data) const
	{

		Function func = data->getFunction();
		utility::BaseType a = data->getLeftBorder();
		utility::BaseType b = data->getRightBorder();

		utility::BaseType delta = b - a;
		size_t n = ceil(delta / data->getEpsilon() - 1);
		size_t tmpN = size_t();
		while (fib(tmpN) <= n)
		{
			tmpN++;
		}
		
		n = tmpN;
		
		cout << "\ta = " << a << "\n";
		cout << "\tb = " << b << "\n";
		cout << "\n\n";
		for (size_t count = 1; count < n; count++, delta = b - a)
		{
			utility::BaseType alpha = a + static_cast<utility::BaseType>(fib(n - count - 1)) / fib(n - count + 1) * delta;
			utility::BaseType beta = a + static_cast<utility::BaseType>(fib(n - count)) / fib(n - count + 1) * delta;

			if (func(alpha) <= func(beta))
			{
				b = beta;
			}
			else
			{
				a = alpha;
			}

			cout << "\ta = " << a << "\n";
			cout << "\tb = " << b << "\n";
			cout << "\n\n";
		}

		utility::BaseType result = (a + b) / 2;

		return func(result);
	}

}