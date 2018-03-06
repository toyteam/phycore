#include <phycore/PhycoreMaterial.h>

namespace phycore
{
	PcMaterial::PcMaterial(float bounciness, float friction)
		:bounciness(bounciness), friction(friction)
	{
	}

	PcMaterial::~PcMaterial()
	{
	}

	void PcMaterial::setBounciness(float b)
	{
		bounciness = b;
	}

	float PcMaterial::getBounciness()
	{
		return bounciness;
	}

	void PcMaterial::setFriction(float f)
	{
		friction = f;
	}

	float PcMaterial::getFriction()
	{
		return friction;
	}
}

