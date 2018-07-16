#include "model.h"
#include "webcamModel.h"
#include "storageModel.h"
#include "include/config.h"
#include <iostream>
#include <cstddef>

int Model::instanceCount_ = 0;
Model* Model::instance_ = NULL;

Model* Model::create() {
	if (WEBCAM_USED_FOR_CAPTURE){
		instanceCount_++;
		instance_ = new WebcamModel;
	}else{
		instanceCount_++;
		instance_ = new StorageModel;
	}
	return instance_;
}

void Model::remove() {
	if (instanceCount_ == 1) {
		delete instance_;
		instance_ = NULL;
	}
}

Model::Model()
{
	std::cout << "MODEL IS ALIVE!!!!" << std::endl;
}

Model::~Model()
{
	delete instance_;
}