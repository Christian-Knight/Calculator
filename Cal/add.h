#pragma once
#include "IBaseCommand.h"
#include <string>
class add : public IBaseCommand
{
public:
	int num1;
	int num2;

	add()
	{

	}
	void setnum1(int num)
	{
		num1 = num;
	}
	void setnum2(int num)
	{
		num2 = num;
	}
	std::string GetAddition(int _num1, int _num2)
	{
		std::string add = std::to_string(_num1 + _num2);
		return add;
	}
	wxString Execute()
	{
		std::string answer = GetAddition(num1, num2);
		return answer;
	}
};