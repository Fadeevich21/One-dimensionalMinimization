#pragma once

#include "utility.hpp"

namespace cm
{

	using Function = utility::BaseType(*)(const utility::BaseType x);

	class DataOneDimentionalMinimization
	{
	protected:
		Function function_;
		utility::BaseType epsilon_;
		utility::BaseType leftBorder_;
		utility::BaseType rightBorder_;

	public:
		DataOneDimentionalMinimization(const Function function, const utility::BaseType epsilon, const utility::BaseType leftBorder, const utility::BaseType rightBorder);
		~DataOneDimentionalMinimization();

		void setFunction(const Function function);
		void setEpsilon(const utility::BaseType epsilon);
		void setLeftBorder(const utility::BaseType leftBorder);
		void setRightBorder(const utility::BaseType rightBorder);

		Function getFunction() const;
		utility::BaseType getEpsilon() const;
		utility::BaseType getLeftBorder() const;
		utility::BaseType getRightBorder() const;
	};

}
