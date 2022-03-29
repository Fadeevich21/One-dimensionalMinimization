#pragma once

#include "utility.hpp"
#include "DataOneDimentionalMinimization.hpp"

namespace cm
{

	class MethodOneDimentionalMinimization
	{
	public:
		virtual utility::BaseType solve(DataOneDimentionalMinimization *const data) const = 0;
	};

}
