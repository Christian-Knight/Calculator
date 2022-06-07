#pragma once

#include "wx/wx.h"

class cal : public wxFrame
{
public:
	cal();
	~cal();
	wxButton* btn = nullptr;
	wxTextCtrl* txtbox = nullptr;
};
