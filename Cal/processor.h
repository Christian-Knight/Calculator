#pragma once
#include <string>
class processor
{
private:
	static processor* _processor;
	int baseNumber;
	processor() {}
public:
	static processor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new processor();
		}
		return _processor;
	}
	processor(processor& other) = delete;
	void operator= (const processor& other) = delete;

	void SetBaseNum(int num)
	{
		baseNumber = num;
	}
	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}
	std::string GetBinary() {
		std::string result = "";
		int num = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (num % 2 == 0) {
				result = "0" + result;
			}
			else {
				result = "1" + result;
			}
			num = num / 2;
		}
		return result;
	}
	std::string GetHexadecimal() 
	{
		std::string hex = "";
		int holder = baseNumber;
		while (holder > 0) {
			int rem = holder % 16;
			if (rem < 10) {
				hex = std::to_string(rem) + hex;
			}
			else if (rem == 10)
			{
				hex = "A" + hex;
			}
			else if (rem == 11)
			{
				hex = "B" + hex;
			}
			else if (rem == 12)
			{
				hex = "C" + hex;
			}
			else if (rem == 13)
			{
				hex = "D" + hex;
			}
			else if (rem == 14)
			{
				hex = "E" + hex;
			}
			else if (rem == 15)
			{
				hex = "F" + hex;
			}
			holder = holder / 16;
		}
		hex = "0x" + hex;
		return hex;
	}
	//std::string GetAddition(int _num1,int _num2)
	//{
	//	std::string add = std::to_string(_num1 + _num2);
	//	return add;
	//}
	//std::string GetSubtraction(int _num1, int _num2)
	//{
	//	std::string sub = std::to_string(_num1 - _num2);
	//	return sub;
	//}
	//std::string GetDivide(int _num1, int _num2)
	//{
	//	std::string div = std::to_string(_num1 / _num2);
	//	return div;
	//}
	//std::string GetMultiply(int _num1, int _num2)
	//{
	//	std::string multi = std::to_string(_num1 * _num2);
	//	return multi;
	//}
};
processor* processor::_processor = nullptr;