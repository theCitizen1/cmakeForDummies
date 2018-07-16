#include "view.h"
#include "terminalView.h"
#include "windowView.h"
#include "controller.h"
#include "model.h"
#include "include/config.h"
#include <iostream>
#include <cstddef>

int View::instanceCount_ = 0;
View* View::instance_ = NULL;


View* View::create() {
	if (View::instanceCount_ == 0) {
		if(TERMINAL_USED_FOR_VISUALIZATION){
			instance_ = new TerminalView;
		}
		else {
			instance_ = new WindowView;
		}
		instanceCount_++;
	}
	return instance_;
}

void View::remove() {
	if (instanceCount_ == 1) {
		delete instance_;
		instance_ = NULL;
	}
}

View::View() {
	model_ = Model::create();
	control_ = Controller::create(model_);
	std::cout << "VIEW IS ALIVE!!!" << std::endl;
}
View::~View() {
	Controller::remove();
	Model::remove();
}