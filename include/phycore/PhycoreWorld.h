#ifndef PHYCORE_WORLD_H
#define PHYCORE_WORLD_H

#include <vector>
#include <list>
#include <memory>
#include <phycore\math\math.h>

#include <phycore/PhycoreMaterial.h>
#include <phycore/PhycoreShape.h>
#include <phycore/PhycoreBody.h>
#include <phycore/PhycoreCollisionInfo.h>

namespace phycore
{
    class PcWorld
    {
	public:
		PcWorld();
		PcWorld(const math::Vector3 &g);
		~PcWorld();

		void simulate(float delta_time);

		PcMaterial *createMaterial(float bounciness, float friction);
		void destroyMaterial(PcMaterial * material);

		PcBody *createBody(const math::Vector3 &pos, const PcShape& shape, const PcMaterial* material);
		void destroyBody(PcBody * material);

	private:
		void collisionInfo(const PcBody *body, PcCollisionInfo * infoList, int maxCount) const;

	private:
		float time;
		math::Vector3 gravity;
		std::list<PcMaterial> material_list;
		std::list<PcBody> body_list;
    };
}



#endif // PHYCORE_WORLD_H