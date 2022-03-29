#pragma once

#include "..\MethodOneDimentionalMinimization\MethodOneDimentionalMinimization.hpp"
#include "..\utility\utility.hpp"

namespace cm
{

	class MethodOptimalSearch : public MethodOneDimentionalMinimization
	{
	public:
		MethodOptimalSearch() = default;
		~MethodOptimalSearch();

		utility::BaseType solve(DataOneDimentionalMinimization * const data) const;
	};

}