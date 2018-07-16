#include "../include/vjAndFisherf.h"
#include "../include/model.h"
#include <iostream>

ViolaJonesAndFisherfaces::ViolaJonesAndFisherfaces(Model* model):Controller(model)
{
	std::cout << "VJ AND FISHERFACES CONTROLLER IS ALIVE!!!!" << std::endl;
}

ViolaJonesAndFisherfaces::~ViolaJonesAndFisherfaces()
{
}

void ViolaJonesAndFisherfaces::tick() {

}