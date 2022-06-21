#pragma once
#include "IBaseCommand.h"
#include <string>
class divi : public IBaseCommand
{
public:
	int num1;
	int num2;

	divi()
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
	std::string GetDivide(int _num1, int _num2)
		{
			std::string div = std::to_string(_num1 / _num2);
			return div;
		}
	wxString Execute()
	{
		std::string answer = GetDivide(num1, num2);
		return answer;
	}
};