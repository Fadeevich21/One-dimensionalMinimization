#pragma once

#include "MethodOneDimentionalMinimization.hpp"
#include "DataOneDimentionalMinimization.hpp"
#include "utility.hpp"

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