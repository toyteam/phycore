#ifndef PHYCORE_COLLISION_INFO_H
#define PHYCORE_COLLISION_INFO_H

#include <phycore/PhycoreBody.h>

#include <phycore\math\math.h>

namespace phycore
{
    class PcCollisionInfo
    {
	public:
		PcCollisionInfo(){}
		~PcCollisionInfo(){}

		PcBody *body;
        math::Vector3 direction;
        float depth;
    };
}



#endif // PHYCORE_COLLISION_INFO_H