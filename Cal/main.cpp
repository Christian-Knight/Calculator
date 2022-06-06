#include "main.h"
wxIMPLEMENT_APP(main);

main::main()
{

}

main::~main()
{

}

bool main::OnInit()
{
	frame = new cal();
	frame->Show();

	return true;
}