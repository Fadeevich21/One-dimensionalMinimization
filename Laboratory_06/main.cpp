#include <iostream>
#include <windows.h>

#include "test.hpp"

using namespace std;
using namespace test;

void test_();

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Привет, Мир!\n\n";

	test_();

	return 0;
}

void test_()
{
	//test_exampleFromTheManual_MethodOptimalSearch();
	//test_exampleFromTheManual_MethodFibonacchi();
	//test_exampleFromTheManual_MethodDividingSegmentHalf();
	test_exampleInternet_MethodFibonacchi();
}
