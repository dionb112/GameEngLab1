#include <iostream>
#include "DrawInterface.h"
class DrawImpl : public Draw
{
public:
	~DrawImpl() { delete this; };
	void draw()
	{
		std::cout << "Bridge: Draw Implementation" << std::endl;
	}
};
