#include <phycore/PhycoreWorld.h>

namespace phycore
{
	PcWorld::PcWorld()
	{
	}

	PcWorld::PcWorld(const math::Vector3 & g)
		:time(0.0f), gravity(g)
	{
	}

	PcWorld::~PcWorld()
	{
	}

	void PcWorld::simulate(float delta_time)
	{
		for (const auto & each : body_list)
		{

		}
	}

	PcMaterial * PcWorld::createMaterial(float bounciness, float friction)
	{
		PcMaterial m(bounciness, friction);
		material_list.push_back(m);
		return &material_list.back();
	}
	void PcWorld::destroyMaterial(PcMaterial * material)
	{
		for (std::list<PcMaterial>::iterator i = material_list.begin(); i != material_list.end(); ++i)
		{
			if (&*i == material)
			{
				material_list.erase(i);
			}
		}
	}
	PcBody * PcWorld::createBody(const math::Vector3 & pos, const PcShape & shape, const PcMaterial * material)
	{
		PcBody b(pos, shape, material);
		body_list.push_back(b);
		return &body_list.back();
	}
	void PcWorld::destroyBody(PcBody * body)
	{
		for (std::list<PcBody>::iterator i = body_list.begin(); i != body_list.end(); ++i)
		{
			if (&*i == body)
			{
				body_list.erase(i);
			}
		}
	}
	void PcWorld::collisionInfo(const PcBody *body, PcCollisionInfo * infoList, int maxCount) const
	{
		for (const auto & each : body_list)
		{
			if (maxCount <= 0)
				break;

			if (body->isCollided(&each))
			{
				body->getCollisionInfo(&each, infoList);
				infoList++;
			}

			maxCount--;
		}
	}
}

