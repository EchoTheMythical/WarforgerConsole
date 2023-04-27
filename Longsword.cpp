#include "Longsword.h"

Longsword::Longsword()
{
	name = "Longsword";
	type = "Blade";
	range = 1;
	hasmetal = true;
	haswood = true;
	hasleather = true;
	damage = "1d8 Slashing PT Two-Handed 1d6 Slashing PT One-Handed";
	addtrait("DiHanded");
	strreq = 1;
}
