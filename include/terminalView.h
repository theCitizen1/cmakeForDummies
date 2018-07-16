#include "view.h"

#ifndef TERMINAL_VIEW
#define TERMINAL_VIEW
class TerminalView : public View 
{
public:
	TerminalView();
	~TerminalView();
	void display();

private:

};
#endif // !TERMINAL_VIEW
