#include "AttireInterface.h"
#include "DrawInterface.h"
class HoodedCloak : public Attire
{
public:
	HoodedCloak() {}
	HoodedCloak(Draw* api) { this->api = api; }
	~HoodedCloak() { if (api) delete api; }
	void draw() { api->draw(); };
private:
	Draw* api;
};
