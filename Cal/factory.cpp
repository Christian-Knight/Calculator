#include "factory.h"
factory::factory(cal* _frame)
{
	frame = _frame;
}

factory::~factory()
{

}
wxButton* factory::btn0()
{
	btn = new wxButton(frame, 0, "0", wxPoint(70, 310), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn1()
{
	btn = new wxButton(frame, 1, "1", wxPoint(10, 250), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn2()
{
	btn = new wxButton(frame, 2, "2", wxPoint(70, 250), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn3()
{
	btn = new wxButton(frame, 3, "3", wxPoint(130, 250), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn4()
{
	btn = new wxButton(frame, 4, "4", wxPoint(10, 190), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn5()
{
	btn = new wxButton(frame, 5, "5", wxPoint(70, 190), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn6()
{
	btn = new wxButton(frame, 6, "6", wxPoint(130, 190), wxSize(50, 50));
	return btn;

}
wxButton* factory::btn7()
{
	btn = new wxButton(frame, 7, "7", wxPoint(10, 130), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn8()
{
	btn = new wxButton(frame, 8, "8", wxPoint(70, 130), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn9()
{
	btn = new wxButton(frame, 9, "9", wxPoint(130, 130), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn10()
{
	btn = new wxButton(frame, 10, "+/-", wxPoint(10, 310), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn11()
{
	btn = new wxButton(frame, 11, "+", wxPoint(130, 310), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn12()
{
	btn = new wxButton(frame, 12, "*", wxPoint(190, 190), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn13()
{
	btn = new wxButton(frame, 13, "/", wxPoint(190, 250), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn14()
{
	btn = new wxButton(frame, 14, "-", wxPoint(190, 310), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn15()
{
	btn = new wxButton(frame, 15, "Dec", wxPoint(190, 70), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn16()
{
	btn = new wxButton(frame, 16, "C", wxPoint(190, 130), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn17()
{
	btn = new wxButton(frame, 17, "Mod", wxPoint(10, 70), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn18()
{
	btn = new wxButton(frame, 18, "Hex", wxPoint(70, 70), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn19()
{
	btn = new wxButton(frame, 19, "Binary", wxPoint(130, 70), wxSize(50, 50));
	return btn;
}
wxButton* factory::btn20()
{
	btn = new wxButton(frame, 20, "=", wxPoint(10, 370), wxSize(230, 30));
	return btn;

}
