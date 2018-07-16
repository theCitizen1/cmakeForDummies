class Controller;
class Model;

#ifndef VIEW
#define VIEW

class View
{
public:
	static View* create();
	static void remove();
	virtual void display() = 0;
private:
	Controller * control_;
	Model * model_;
	static int instanceCount_;
	static View* instance_;
protected:
	View();
	~View();
};

#endif // !VIEW
