#include <iostream>
#include <phycore/phycore.h>
using namespace phycore;

int main(int argc, const char* argv[])
{
	PcWorld world(math::Vector3(0,0,-9.8));
	PcMaterial* m = world.createMaterial(PcShapeBall(math::Vector3(0,0,0), 1));
	PcBody* body = world.createBody(math::Vector3(0,0,0), m);

	for(int i=0;i<100;++i)
	{
		world.simulate(0.01f);
		std::cout<<body->getPosition()<<std::endl;
	}

	return 0;
}