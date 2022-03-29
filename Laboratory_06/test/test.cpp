#include "test.hpp"
#include "..\utility\utility.hpp"

#include "..\DataOneDimentionalMinimization\DataOneDimentionalMinimization.hpp"
#include "..\MethodOneDimentionalMinimization\MethodOneDimentionalMinimization.hpp"
#include "..\SolveOneDimentionalMinimization\SolveOneDimentionalMinimization.hpp"

#include "..\MethodOptimalSearch\MethodOptimalSearch.hpp"
#include "..\MethodDividingSegmentHalf\MethodDividingSegmentHalf.hpp"
#include "..\MethodFibonacchi\MethodFibonacchi.hpp"

#include <iostream>
#include <cmath>

using namespace std;
using namespace cm;
using namespace utility;

namespace test
{

#define CHECK_STATUS(status) {cout << "Status: " << (status == true ? "ok" : "false") << "\n\n";}

	BaseType test_SolveOneDimentionalMinimization(DataOneDimentionalMinimization * const data, MethodOneDimentionalMinimization * const method)
	{
		SolveOneDimentionalMinimization solver(data, method);
		return solver.solve();
	}

	BaseType test_MethodOptimalSearch(DataOneDimentionalMinimization *const data)
	{
		cout << "Test: test_MethodOptimalSearch\n";

		MethodOneDimentionalMinimization *method = new MethodOptimalSearch();
		BaseType result = test_SolveOneDimentionalMinimization(data, method);

		return result;
	}

	BaseType test_MethodFibonacchi(DataOneDimentionalMinimization *const data)
	{
		cout << "Test: test_MethodFibonacchi\n";

		MethodOneDimentionalMinimization *method = new MethodFibonacchi();
		BaseType result = test_SolveOneDimentionalMinimization(data, method);

		return result;
	}

	BaseType test_MethodDividingSegmentHalf(DataOneDimentionalMinimization *const data)
	{
		cout << "Test: test_MethodDividingSegmentHalf\n";

		MethodOneDimentionalMinimization *method = new MethodDividingSegmentHalf();
		BaseType result = test_SolveOneDimentionalMinimization(data, method);

		return result;
	}

	void test_exampleFromTheManual_MethodOptimalSearch()
	{
		cout << "Test: test_exampleFromTheManual_MethodOptimalSearch\n";

		Function function = [](const BaseType x)
		{
			return powl(x, 3) - x + expl(-x);
		};
		BaseType epsilon = 0.01L;
		BaseType leftBorder = 0.L;
		BaseType rightBorder = 1.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodOptimalSearch(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = 0.14L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_exampleFromTheManual_MethodFibonacchi()
	{
		cout << "Test: test_exampleFromTheManual_MethodFibonacchi\n";

		Function function = [](const BaseType x)
		{
			return powl(x, 3) - x + expl(-x);
		};
		BaseType epsilon = 0.001L;
		BaseType leftBorder = 0.L;
		BaseType rightBorder = 1.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodFibonacchi(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = 0.14L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_exampleFromTheManual_MethodDividingSegmentHalf()
	{
		cout << "Test: test_exampleFromTheManual_MethodDividingSegmentHalf\n";

		Function function = [](const BaseType x)
		{
			return powl(x, 3) - x + expl(-x);
		};
		BaseType epsilon = 0.01L;
		BaseType leftBorder = 0.L;
		BaseType rightBorder = 1.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodDividingSegmentHalf(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = 0.14L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_exampleInternet_MethodFibonacchi()
	{
		cout << "Test: test_exampleInternet_MethodFibonacchi\n";

		Function function = [](const BaseType x)
		{
			return powl(x, 2) + 2 * x;
		};
		BaseType epsilon = 0.2L;
		BaseType leftBorder = -3.L;
		BaseType rightBorder = 5.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodFibonacchi(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = -0.9987L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_variant10_MethodOptimalSearch()
	{
		cout << "Test: test_variant10_MethodOptimalSearch\n";

		Function function = [](const BaseType x)
		{
			return (x - 1) * (x - 2);
		};
		BaseType epsilon = 0.001L;
		BaseType leftBorder = 1.L;
		BaseType rightBorder = 2.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodOptimalSearch(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = -0.25L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_variant10_MethodFibonacchi()
	{
		cout << "Test: test_variant10_MethodFibonacchi\n";

		Function function = [](const BaseType x)
		{
			return (x - 1) * (x - 2);
		};
		BaseType epsilon = 0.001L;
		BaseType leftBorder = 1.L;
		BaseType rightBorder = 2.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodFibonacchi(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = -0.25L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

	void test_variant10_MethodDividingSegmentHalf()
	{
		cout << "Test: test_variant10_MethodDividingSegmentHalf\n";

		Function function = [](const BaseType x)
		{
			return (x - 1) * (x - 2);
		};
		BaseType epsilon = 0.001L;
		BaseType leftBorder = 1.L;
		BaseType rightBorder = 2.L;

		DataOneDimentionalMinimization *data = new DataOneDimentionalMinimization(function, epsilon, leftBorder, rightBorder);
		BaseType result = test_MethodDividingSegmentHalf(data);
		cout << "\tResult: " << result << "\n\n";

		BaseType checkResult = -0.25L;
		CHECK_STATUS(abs(result - checkResult) <= epsilon);
	}

}
