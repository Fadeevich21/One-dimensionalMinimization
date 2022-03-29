#pragma once

#include "..\utility\utility.hpp"
#include "..\DataOneDimentionalMinimization\DataOneDimentionalMinimization.hpp"

namespace cm
{

	class MethodOneDimentionalMinimization
	{
	public:
		virtual utility::BaseType solve(DataOneDimentionalMinimization *const data) const = 0;
	};

}
