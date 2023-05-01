#include "Syringe.h"

Syringe::Syringe()
{
	name = "Syringe";
	type = "Special";
	range = 1;
	hasmetal = true;
	damage = "1d4 Piercing PT";
	strreq = 4;
	addtrait(trait.tdexterous);
	Trait special;
	special.name = "Special";
	special.effect = "As an action you can fill it with a liquid (potion, poison, or otherwise). When you hit with this weapon you inject the liquid inside it into the creature you hit affecting them as if they drank the liquid you injected them with. You can also choose to deal no damage with this weapon.";
	addtrait(special);
}
