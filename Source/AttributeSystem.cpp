#include "AttributeSystem.h"

float AttributeSystem::GetEffectiveness(Attribute attacker, Attribute defender)
{
	static float table[(int)Attribute::Max][(int)Attribute::Max] =
	{
		//None,Wind,Fire,Wood,Earth
		{1.0f,1.0f,1.0f,1.0f,1.0f},//None
		{1.0f,1.0f,1.0f,1.0f,1.0f},//Wind
		{1.0f,1.0f,1.0f,1.0f,1.0f},//Fire
		{1.0f,1.0f,1.0f,1.0f,1.0f},//Wood
		{1.0f,1.0f,1.0f,1.0f,1.0f},//Earth
	};

	return table[(int)attacker][(int)defender];
}