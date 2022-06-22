#include "cal.h"
#include "factory.h"
#include "processor.h"
#include <vector>
#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
wxBEGIN_EVENT_TABLE(cal, wxFrame)

wxEND_EVENT_TABLE()
int num1, num2;
wxString _num1 = "";
wxString _num2 = "";
wxString holder = "";
bool symbol = false;
bool setnum = false;
bool posneg = false;
bool setholder = false;
wxString sym = "";
cal::cal() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(265, 445))
{
	factory build = factory(this);
	wxFont txt(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false);
	txtbox = new wxTextCtrl(this, 100, "", wxPoint(10, 20), wxSize(230, 35));
	txtbox->SetFont(txt);

	btn = build.builder(0, "0", wxPoint(70, 310), wxSize(50, 50));
	btn = build.builder(1, "1", wxPoint(10, 250), wxSize(50, 50));
	btn = build.builder(2, "2", wxPoint(70, 250), wxSize(50, 50));
	btn = build.builder(3, "3", wxPoint(130, 250), wxSize(50, 50));
	btn = build.builder(4, "4", wxPoint(10, 190), wxSize(50, 50));
	btn = build.builder(5, "5", wxPoint(70, 190), wxSize(50, 50));
	btn = build.builder(6, "6", wxPoint(130, 190), wxSize(50, 50));
	btn = build.builder(7, "7", wxPoint(10, 130), wxSize(50, 50));
	btn = build.builder(8, "8", wxPoint(70, 130), wxSize(50, 50));
	btn = build.builder(9, "9", wxPoint(130, 130), wxSize(50, 50));
	btn = build.builder(10, "+/-", wxPoint(10, 310), wxSize(50, 50));
	btn = build.builder(11, "+", wxPoint(130, 310), wxSize(50, 50));
	btn = build.builder(12, "*", wxPoint(190, 190), wxSize(50, 50));
	btn = build.builder(13, "/", wxPoint(190, 250), wxSize(50, 50));
	btn = build.builder(14, "-", wxPoint(190, 310), wxSize(50, 50));
	btn = build.builder(15, "Dec", wxPoint(190, 70), wxSize(50, 50));
	btn = build.builder(16, "C", wxPoint(190, 130), wxSize(50, 50));
	btn = build.builder(17, "Mod", wxPoint(10, 70), wxSize(50, 50));
	btn = build.builder(18, "Hex", wxPoint(70, 70), wxSize(50, 50));
	btn = build.builder(19, "Binary", wxPoint(130, 70), wxSize(50, 50));
	btn = build.builder(20, "=", wxPoint(10, 370), wxSize(230, 30));


	Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cal::OnButtonClicked, this);



}



cal::~cal()
{
}

void cal::OnButtonClicked(wxCommandEvent& evt)
{
	std::vector<IBaseCommand*> com;
	processor* process = processor::GetInstance();
	wxString txtdisplay = "";
	if (evt.GetId() >= 0 && evt.GetId() < 10)
	{
		txtdisplay << evt.GetId();
		txtbox->AppendText(txtdisplay);
		if (symbol == true)
		{
			if (num2 != 0)
			{
				_num2 = std::to_string(num2);
				_num2 += std::to_string(evt.GetId());
			}
			else
			{
				_num2 += std::to_string(evt.GetId());
			}


		}
		else
		{

			_num1 = txtbox->GetValue();
		}
	}

	if (evt.GetId() == 16)
	{
		txtbox->Clear();
		setnum = false;
		setholder = false;
		symbol = false;
		holder.Clear();
		_num2.Clear();
		_num1.Clear();
	}
	if (evt.GetId() == 11)
	{

		txtbox->AppendText("+");
		sym = "+";
		symbol = true;
		setholder = false;
	}
	if (evt.GetId() == 14)
	{

		txtbox->AppendText("-");
		sym = "-";
		symbol = true;
		setholder = false;
	}
	if (evt.GetId() == 12)
	{

		txtbox->AppendText("*");
		sym = "*";
		symbol = true;
		setholder = false;
	}
	if (evt.GetId() == 13)
	{

		txtbox->AppendText("/");
		sym = "/";
		symbol = true;
		setholder = false;
	}
	if (evt.GetId() == 15)
	{
		if (setnum == false)
		{
			process->SetBaseNum(wxAtoi(txtbox->GetValue()));
			setnum = true;
		}
		txtbox->Clear();
		txtbox->AppendText(process->GetDecimal());
	}
	if (evt.GetId() == 17)
	{
		txtbox->AppendText("MOD");
	}
	if (evt.GetId() == 18)
	{
		if (setnum == false)
		{
			process->SetBaseNum(wxAtoi(txtbox->GetValue()));
			setnum = true;
		}
		txtbox->Clear();
		txtbox->AppendText(process->GetHexadecimal());
	}
	if (evt.GetId() == 19)
	{
		if (setnum == false)
		{
			process->SetBaseNum(wxAtoi(txtbox->GetValue()));
			setnum = true;
		}
		txtbox->Clear();
		txtbox->AppendText(process->GetBinary());
	}
	if (evt.GetId() == 20)
	{
		symbol = false;
		if (sym == "+")
		{
			add* Add = new add();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Add->setnum1(num1);
			Add->setnum2(num2);

			com.push_back(Add);

			txtbox->Clear();

			txtbox->AppendText(com[0]->Execute());
			com.pop_back();
			delete Add;
		}
		else if (sym == "-")
		{
			sub* Sub = new sub();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Sub->setnum1(num1);
			Sub->setnum2(num2);

			com.push_back(Sub);

			txtbox->Clear();

			txtbox->AppendText(com[0]->Execute());
			com.pop_back();
			delete Sub;
		}
		else if (sym == "/")
		{
			divi* Div = new divi();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Div->setnum1(num1);
			Div->setnum2(num2);

			com.push_back(Div);

			txtbox->Clear();

			txtbox->AppendText(com[0]->Execute());
			com.pop_back();
			delete Div;
		}
		else if (sym == "*")
		{
			mult* Mult = new mult();

			num1 = wxAtoi(_num1);
			num2 = wxAtoi(_num2);

			Mult->setnum1(num1);
			Mult->setnum2(num2);

			com.push_back(Mult);

			txtbox->Clear();

			txtbox->AppendText(com[0]->Execute());
			com.pop_back();
			delete Mult;
		}
		_num2.Clear();
		_num1.Clear();
		holder.Clear();
		num1 = 0;
		num2 = 0;
		setnum = false;
		setholder = false;
	}
	if (evt.GetId() == 10)
	{
		if (symbol == false)
		{
			if (setholder == false)
			{
				holder = _num1;
				setholder = true;
			}
			if (posneg == true)
			{
				posneg = false;
				_num1.Clear();
				_num1 = holder;
				txtbox->Clear();
				txtbox->AppendText(_num1);
			}
			else
			{
				posneg = true;
				_num1.Clear();
				_num1 = "-";
				_num1 += holder;
				txtbox->Clear();
				txtbox->AppendText(_num1);
			}
		}
		else
		{
			if (setholder == false)
			{
				holder = _num2;
				setholder = true;
			}
			if (posneg == true)
			{
				posneg = false;
				_num2.Clear();
				_num2 += holder;
				txtbox->Clear();
				txtbox->AppendText(_num1);
				txtbox->AppendText(sym);
				txtbox->AppendText(_num2);
			}
			else
			{
				posneg = true;
				_num2.Clear();
				_num2 = "-";
				_num2 += holder;
				txtbox->Clear();
				txtbox->AppendText(_num1);
				txtbox->AppendText(sym);
				txtbox->AppendText(_num2);
				
			}
		}
		
	}
}

