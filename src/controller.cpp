#include "controller.h"
#include "vjAndFisherf.h"
#include "include/config.h"
#include <iostream>
#include <cstddef>

int Controller::instanceCount_ = 0;
Controller* Controller::instance_ = 0;

Controller* Controller::create(Model * model) {
	if (instanceCount_ == 0){
		if (USE_OPENCV_VJ_AND_FISHERF){
			instance_ = new ViolaJonesAndFisherfaces(model);
		instanceCount_++;
		}
	}
	return instance_;
}

void Controller::remove() {
	if (instanceCount_ == 1) {
		delete instance_;
		instance_ = NULL;
	}
}

Controller::Controller(Model* model):model_(model)
{
	std::cout << "CONTROLLER IS ALIVE!!!" << std::endl;
}

Controller::~Controller()
{
	delete instance_;
}