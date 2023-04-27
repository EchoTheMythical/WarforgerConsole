#include "Greatsword.h"
using namespace std;
Greatsword::Greatsword()
{
	name = "Greatsword" ;
	type = "Blade";
	range = 2;
	hasmetal = true;
	haswood = true;
	damage = "1d10 Slashing/Piercing PT";
	addtrait("Momentum");
	addtrait("Stance(Piercing)");
	addtrait("long");
	addtrait("Heavy");
	strreq = 2;
}
