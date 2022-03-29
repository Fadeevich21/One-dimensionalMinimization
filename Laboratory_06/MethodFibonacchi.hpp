#pragma once

#include "MethodOneDimentionalMinimization.hpp"
#include "utility.hpp"

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
