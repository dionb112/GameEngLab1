#include <iostream>
#include "DrawInterface.h"
class DrawImpl : public Draw
{
public:
	void draw()
	{
		std::cout << "Bridge: Draw Implementation" << std::endl;
	}
};
