#include "cal.h"
#include "factory.h"
wxBEGIN_EVENT_TABLE(cal, wxFrame)

wxEND_EVENT_TABLE()
cal::cal() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(265, 445))
{
	factory build = factory(this);
	wxFont txt(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false);
	txtbox = new wxTextCtrl(this, 100, "", wxPoint(10, 20), wxSize(230, 35));
	txtbox->SetFont(txt);

	btn = build.btn0();
	btn = build.btn1();
	btn = build.btn2();
	btn = build.btn3();
	btn = build.btn4();
	btn = build.btn5();
	btn = build.btn6();
	btn = build.btn7();
	btn = build.btn8();
	btn = build.btn9();
	btn = build.btn10();
	btn = build.btn11();
	btn = build.btn12();
	btn = build.btn13();
	btn = build.btn14();
	btn = build.btn15();
	btn = build.btn16();
	btn = build.btn17();
	btn = build.btn18();
	btn = build.btn19();
	btn = build.btn20();


	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cal::OnButtonClicked, this);



}



cal::~cal()
{
}

void cal::OnButtonClicked(wxCommandEvent& evt)
{
	wxString txtdisplay = "";
	if (evt.GetId() >= 0 && evt.GetId() < 10)
	{
		txtdisplay << evt.GetId();
		txtbox->AppendText(txtdisplay);
	}

	if (evt.GetId() == 16)
	{
		txtbox->Clear();
	}
	if (evt.GetId() == 11)
	{

		txtbox->AppendText("+");

	}
	if (evt.GetId() == 14)
	{

		txtbox->AppendText("-");



	}
	if (evt.GetId() == 12)
	{

		txtbox->AppendText("*");


	}
	if (evt.GetId() == 13)
	{
		txtbox->AppendText("/");

	}
	if (evt.GetId() == 15)
	{
		txtbox->AppendText("DEC");
	}
	if (evt.GetId() == 17)
	{
		txtbox->AppendText("MOD");
	}
	if (evt.GetId() == 18)
	{
		txtbox->AppendText("HEX");
	}
	if (evt.GetId() == 19)
	{
		txtbox->AppendText("Binary");
	}
	if (evt.GetId() == 20)
	{
		txtbox->AppendText("=");
	}
	if (evt.GetId() == 10)
	{
		txtbox->AppendText("+/-");
	}
}

