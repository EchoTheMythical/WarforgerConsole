#include "Rapier.h"

Rapier::Rapier()
{
	name = "Rapier";
	type = "Blade";
	range = 2;
	hasmetal = true;
	hascloth = true;
	damage = "1d10 Slashing/Piercing PT";
	addtrait("Long");
	addtrait("Dexterous");
	strreq = 2;
}
