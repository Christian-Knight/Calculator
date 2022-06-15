#pragma once
#include "wx/wx.h"
#include "cal.h"
class factory
{
private:
	cal* frame = nullptr;
public:
	factory(cal* _frame);
	~factory();
	wxButton* builder (wxWindowID ID, wxString string, wxPoint point, wxSize size);
	wxButton* btn = nullptr;
};
