#include "./model.h"

#ifndef CONTROLLER
#define CONTROLLER

class Controller
{
public:
	static Controller* create(Model * model);
	static void remove();
	virtual void tick() = 0;
private:
	Model* model_;
	static int instanceCount_;
	static Controller* instance_;
protected:
	Controller(Model* model);
	~Controller();
};



#endif // !CONTROLLER
