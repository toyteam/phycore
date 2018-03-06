#ifndef PHYCORE_MATERIAL_H
#define PHYCORE_MATERIAL_H

namespace phycore
{
    class PcMaterial
    {
	public:
		PcMaterial(float bounciness, float friction);
		~PcMaterial();

		void setBounciness(float b);
		float getBounciness();

		void setFriction(float f);
		float getFriction();

	private:
		float bounciness;
		float friction;
    };
}



#endif // PHYCORE_MATERIAL_H