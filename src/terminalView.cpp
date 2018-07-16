#include "terminalView.h"
#include <iostream>

TerminalView::TerminalView():View()
{
	std::cout << "TERMINAL VIEW IS ALIVE!!!" << std::endl;
}

TerminalView::~TerminalView()
{
}

void TerminalView::display() {

}