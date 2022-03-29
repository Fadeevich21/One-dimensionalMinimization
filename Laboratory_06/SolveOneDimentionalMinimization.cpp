#include "SolveOneDimentionalMinimization.hpp"

namespace cm
{

	SolveOneDimentionalMinimization::SolveOneDimentionalMinimization(DataOneDimentionalMinimization *const data, MethodOneDimentionalMinimization *const method)
	: data_(data), method_(method)
	{

	}

	SolveOneDimentionalMinimization::~SolveOneDimentionalMinimization()
	{
		delete this->data_;
		delete this->method_;
	}

	void SolveOneDimentionalMinimization::setData(DataOneDimentionalMinimization *const data)
	{
		this->data_ = data;
	}

	void SolveOneDimentionalMinimization::setMethod(MethodOneDimentionalMinimization *const method)
	{
		this->method_ = method;
	}

	utility::BaseType SolveOneDimentionalMinimization::solve() const
	{
		return this->method_->solve(this->data_);
	}

}
