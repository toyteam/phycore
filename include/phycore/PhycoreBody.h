#ifndef PHYCORE_BODY_H
#define PHYCORE_BODY_H

#include <vector>
#include <list>
#include <memory>
#include <phycore\math\math.h>

#include <phycore/PhycoreMaterial.h>
#include <phycore/PhycoreShape.h>
#include <phycore/PhycoreCollisionInfo.h>

namespace phycore
{
    class PcBody
    {
	public:
		PcBody();
		PcBody(const math::Vector3 &pos, const PcShape& shape, const PcMaterial * material);
		~PcBody();

		bool isCollided(const PcBody* body) const;
		void getCollisionInfo(const PcBody* body, PcCollisionInfo * info) const;

		void setPosition(const math::Vector3& pos);
		math::Vector3 getPosition();
		

	private:
		const PcMaterial* material;
		PcShape shape;

		math::Vector3 position;
		math::Vector3 velocity;
    };
}



#endif // PHYCORE_BODY_H