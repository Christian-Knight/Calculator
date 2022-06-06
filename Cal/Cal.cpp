#include "cal.h"

cal::cal() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(265, 445))
{
	wxFont txt(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_ITALIC, wxFONTWEIGHT_BOLD, false);
	txtbox = new wxTextCtrl(this, 100, "", wxPoint(10, 20), wxSize(230, 35));
	txtbox->SetFont(txt);

	btn = new wxButton(this, 12, "Mod", wxPoint(10, 70), wxSize(50, 50));
	btn = new wxButton(this, 13, "Hex", wxPoint(70, 70), wxSize(50, 50));
	btn = new wxButton(this, 14, "Binary", wxPoint(130, 70), wxSize(50, 50));
	btn = new wxButton(this, 15, "Dec", wxPoint(190, 70), wxSize(50, 50));

	btn = new wxButton(this, 7, "7", wxPoint(10, 130), wxSize(50, 50));
	btn = new wxButton(this, 8, "8", wxPoint(70, 130), wxSize(50, 50));
	btn = new wxButton(this, 9, "9", wxPoint(130, 130), wxSize(50, 50));
	btn = new wxButton(this, 16, "C", wxPoint(190, 130), wxSize(50, 50));

	btn = new wxButton(this, 4, "4", wxPoint(10, 190), wxSize(50, 50));
	btn = new wxButton(this, 5, "5", wxPoint(70, 190), wxSize(50, 50));
	btn = new wxButton(this, 6, "6", wxPoint(130, 190), wxSize(50, 50));
	btn = new wxButton(this, 17, "*", wxPoint(190, 190), wxSize(50, 50));

	btn = new wxButton(this, 1, "1", wxPoint(10, 250), wxSize(50, 50));
	btn = new wxButton(this, 2, "2", wxPoint(70, 250), wxSize(50, 50));
	btn = new wxButton(this, 3, "3", wxPoint(130, 250), wxSize(50, 50));
	btn = new wxButton(this, 18, "/", wxPoint(190, 250), wxSize(50, 50));

	btn = new wxButton(this, 10, "+/-", wxPoint(10, 310), wxSize(50, 50));
	btn = new wxButton(this, 0, "0", wxPoint(70, 310), wxSize(50, 50));
	btn = new wxButton(this, 11, "+", wxPoint(130, 310), wxSize(50, 50));
	btn = new wxButton(this, 19, "-", wxPoint(190, 310), wxSize(50, 50));

	btn = new wxButton(this, 20, "=", wxPoint(10, 370), wxSize(230, 30));

}



cal::~cal()
{

}