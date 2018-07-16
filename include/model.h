
#ifndef MODEL
#define MODEL

class Model
{
public:
	static Model* create();
	static void remove();

private:
	static int instanceCount_;
	static Model* instance_;

protected:
	Model();
	~Model();
};
#endif // !MODEL
