#pragma once

#include "MethodOneDimentionalMinimization.hpp"
#include "utility.hpp"


namespace cm
{

	class MethodDividingSegmentHalf : public MethodOneDimentionalMinimization
	{
	public:
		MethodDividingSegmentHalf() = default;
		~MethodDividingSegmentHalf();

		utility::BaseType solve(DataOneDimentionalMinimization *const data) const;
	};

}