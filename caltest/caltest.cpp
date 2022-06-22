#include "pch.h"
#include "CppUnitTest.h"
#include "../Cal/add.h"
#include "../Cal/div.h"
#include "../Cal/mult.h"
#include "../Cal/sub.h"
#include "../Cal/processor.h"
#include "../Cal/factory.h"
#include "../Cal/Cal.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace caltest
{
	TEST_CLASS(caltest)
	{
	public:
		cal* frame = new cal();
		wxButton* btn = nullptr;
		factory build = factory(frame);
		wxString answer;
		add* Add = new add();
		sub* Sub = new sub();
		divi* Div = new divi();
		mult* Mult = new mult();
		processor* process = processor::GetInstance();
		TEST_METHOD(TwoPlusFiveEqualsSeven)
		{
			answer = Add->GetAddition(2, 5);
			Assert::AreEqual(answer, "7");
		}
		TEST_METHOD(TwoSubFiveEqualsNegThree)
		{
			answer = Sub->GetSubtraction(2, 5);
			Assert::AreEqual(answer, "-3");
		}
		TEST_METHOD(TwoMultFiveEqualsTen)
		{
			answer = Mult->GetMultiply(2, 5);
			Assert::AreEqual(answer, "10");
		}
		TEST_METHOD(TwodivTwoEqualsOne)
		{
			answer = Div->GetDivide(2, 2);
			Assert::AreEqual(answer, "1");
		}
		TEST_METHOD(NegTwelvedivTwoEqualsSix)
		{
			answer = Div->GetDivide(-12, 2);
			Assert::AreEqual(answer, "-6");
		}
		TEST_METHOD(SixBinEqualsOneTen)
		{
			process->SetBaseNum(6);
			answer = process->GetBinary();
			Assert::AreEqual(answer, "00000000000000000000000000000110");
		}
		TEST_METHOD(SixHexEquals0x6)
		{
			process->SetBaseNum(6);
			answer = process->GetHexadecimal();
			Assert::AreEqual(answer, "0x6");
		}
		TEST_METHOD(TwoHexEquals0x2)
		{
			process->SetBaseNum(2);
			answer = process->GetHexadecimal();
			Assert::AreEqual(answer, "0x2");
		}
		TEST_METHOD(FifteenHexEquals0xF)
		{
			process->SetBaseNum(15);
			answer = process->GetHexadecimal();
			Assert::AreEqual(answer, "0xF");
		}
		TEST_METHOD(TenBinEqualsThousandTen)
		{
			process->SetBaseNum(10);
			answer = process->GetBinary();
			Assert::AreEqual(answer, "00000000000000000000000000001010");
		}
		TEST_METHOD(IdTenIsEqualTen)
		{
			btn = build.builder(10, "10", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 10);
		}
		TEST_METHOD(IdNineIsEqualnine)
		{
			btn = build.builder(9, "9", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 9);
		}
		TEST_METHOD(IdEightIsEqualEight)
		{
			btn = build.builder(8, "8", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 8);
		}
		TEST_METHOD(IdSevenIsEqualSeven)
		{
			btn = build.builder(7, "7", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 7);
		}
		TEST_METHOD(IdSixIsEqualSix)
		{
			btn = build.builder(6, "6", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 6);
		}
		TEST_METHOD(IdFiveIsEqualFive)
		{
			btn = build.builder(5, "5", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 5);
		}
		TEST_METHOD(IdFourIsEqualFour)
		{
			btn = build.builder(4, "4", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 4);
		}
		TEST_METHOD(IdThreeIsEqualThree)
		{
			btn = build.builder(3, "3", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 3);
		}
		TEST_METHOD(IdTwoIsEqualTwo)
		{
			btn = build.builder(2, "2", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 2);
		}
		TEST_METHOD(IdOneIsEqualOne)
		{
			btn = build.builder(1, "1", wxPoint(70, 310), wxSize(50, 50));
			Assert::AreEqual(btn->GetId(), 1);
		}
		
	};
}
