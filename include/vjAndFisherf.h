#include "./controller.h"

class Model;

#ifndef VJ_FISHERF
#define VJ_FISHERF
class ViolaJonesAndFisherfaces : public Controller
{
public:
	ViolaJonesAndFisherfaces(Model* model);
	~ViolaJonesAndFisherfaces();
	void tick();
private:
	
};

#endif // !VJ_FISHERF
