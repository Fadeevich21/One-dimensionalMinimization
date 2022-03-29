#pragma once

#include "..\MethodOneDimentionalMinimization\MethodOneDimentionalMinimization.hpp"
#include "..\utility\utility.hpp"

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