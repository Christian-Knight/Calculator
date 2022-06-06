#pragma once

#include "wx/wx.h"

class cal : public wxFrame
{
public:
	cal();
	~cal();
	int Width = 10;
	int Height = 10;
	wxButton* btn = nullptr;
	wxTextCtrl* txtbox = nullptr;
};
