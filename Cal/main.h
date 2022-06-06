#pragma once
#include "wx/wx.h"
#include "cal.h"
class main : public wxApp
{
public:
	main();
	~main();
	virtual bool OnInit();

private:
	cal* frame = nullptr;
};

