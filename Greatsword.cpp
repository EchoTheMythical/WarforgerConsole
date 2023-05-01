#include "Greatsword.h"
using namespace std;
Greatsword::Greatsword()
{
	name = "Greatsword";
	type = "Blade";
	range = 2;
	hasmetal = true;
	haswood = true;
	damage = "1d10 Slashing/Piercing PT";
	trait.tstance.name = "Stance(Piercing)";
	addtrait(trait.tmomentum);
	addtrait(trait.tstance);
	addtrait(trait.tlong);
	addtrait(trait.theavy);
	strreq = 2;
}
