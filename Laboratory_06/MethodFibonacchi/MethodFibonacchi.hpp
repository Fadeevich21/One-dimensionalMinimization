#pragma once

#include "..\MethodOneDimentionalMinimization\MethodOneDimentionalMinimization.hpp"
#include "..\utility\utility.hpp"

namespace cm
{

	class MethodFibonacchi : public MethodOneDimentionalMinimization
	{
	public:
		MethodFibonacchi() = default;
		~MethodFibonacchi();

		utility::BaseType solve(DataOneDimentionalMinimization *const data) const;
	};

}
