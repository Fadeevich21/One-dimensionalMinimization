#pragma once

#include "..\DataOneDimentionalMinimization\DataOneDimentionalMinimization.hpp"
#include "..\MethodOneDimentionalMinimization\MethodOneDimentionalMinimization.hpp"

namespace cm
{

	class SolveOneDimentionalMinimization
	{
	private:
		DataOneDimentionalMinimization *data_;
		MethodOneDimentionalMinimization *method_;

	public:
		SolveOneDimentionalMinimization(DataOneDimentionalMinimization * const data, MethodOneDimentionalMinimization * const method);
		~SolveOneDimentionalMinimization();

		void setData(DataOneDimentionalMinimization *const data);
		void setMethod(MethodOneDimentionalMinimization *const method);

		utility::BaseType solve() const;
	};

}