#include "factory.h"
factory::factory(cal* _frame)
{
	frame = _frame;
}

factory::~factory()
{

}

wxButton* factory::builder(wxWindowID ID, wxString string, wxPoint point, wxSize size)
{
	btn = new wxButton(frame, ID, string, point, size);
	return btn;
}

