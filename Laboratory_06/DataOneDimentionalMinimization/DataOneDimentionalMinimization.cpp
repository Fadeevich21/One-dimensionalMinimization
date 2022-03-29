#include "DataOneDimentionalMinimization.hpp"

namespace cm
{

	DataOneDimentionalMinimization::DataOneDimentionalMinimization(const Function function, const utility::BaseType epsilon, const utility::BaseType leftBorder, const utility::BaseType rightBorder)
	: function_(function), epsilon_(epsilon), leftBorder_(leftBorder), rightBorder_(rightBorder)
	{

	}

	DataOneDimentionalMinimization::~DataOneDimentionalMinimization()
	{
	}

	void DataOneDimentionalMinimization::setFunction(const Function function)
	{
		this->function_ = function;
	}
	
	void DataOneDimentionalMinimization::setEpsilon(const utility::BaseType epsilon)
	{
		this->epsilon_ = epsilon;
	}

	void DataOneDimentionalMinimization::setLeftBorder(const utility::BaseType leftBorder)
	{
		this->leftBorder_ = leftBorder;
	}

	void DataOneDimentionalMinimization::setRightBorder(const utility::BaseType rightBorder)
	{
		this->rightBorder_ = rightBorder;
	}

	Function DataOneDimentionalMinimization::getFunction() const
	{
		return this->function_;
	}

	utility::BaseType DataOneDimentionalMinimization::getEpsilon() const
	{
		return this->epsilon_;
	}

	utility::BaseType DataOneDimentionalMinimization::getLeftBorder() const
	{
		return this->leftBorder_;
	}

	utility::BaseType DataOneDimentionalMinimization::getRightBorder() const
	{
		return this->rightBorder_;
	}

}
