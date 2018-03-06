#include <phycore/PhycoreBody.h>

namespace phycore
{
	PcBody::PcBody()
	{
	}
	PcBody::PcBody(const math::Vector3 & pos, const PcShape & shape, const PcMaterial * material)
		:position(pos), shape(shape), material(material)
	{
	}
	PcBody::~PcBody()
	{
	}
	bool PcBody::isCollided(const PcBody * body) const
	{
		return false;
	}
	void PcBody::getCollisionInfo(const PcBody * body, PcCollisionInfo * info) const
	{
	}
	void PcBody::setPosition(const math::Vector3& pos)
	{
		position = pos;
	}
	math::Vector3 PcBody::getPosition()
	{
		return position;
	}
}


