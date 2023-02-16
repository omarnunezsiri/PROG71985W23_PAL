// PAL Week 6 - Program 1:
//					review pass by reference (from week 5)
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-11		initial

#include <stdio.h>

#define FIRE 1
#define WATER 2
#define AIR 3
#define EARTH 4
#define FIRE_MULTIPLIER 0.5
#define WATER_MULTIPLIER 0.2
#define AIR_MULTIPLIER 0.3
#define EARTH_MULTIPLIER 0.6
#define DMG_CONSTANT 9.1873

void getSpellDamage(float*, int);
int main(void)
{
	int spell = FIRE;
	float dmg = 0.0f;
	getSpellDamage(&dmg, spell); // are we changing the value of dmg at any point?

	printf("SPELL: %d\n", spell);
	printf("Damage: %f\n", dmg); // will this display 0.0 or the expected value?
	return 0;
}

void getSpellDamage(float* dmg, int spell)
{
	*dmg = DMG_CONSTANT;

	if (spell == FIRE)
	{
		*dmg *= FIRE_MULTIPLIER;
	}
	else if (spell == WATER)
	{
		*dmg *= WATER_MULTIPLIER;
	}
	else if (spell == AIR)
	{
		*dmg *= AIR_MULTIPLIER;
	}
	else if (spell == EARTH)
	{
		*dmg *= EARTH_MULTIPLIER;
	}
}