#include "CombatAnchor.h"

CombatAnchor::CombatAnchor()
{
	name = "Combat Anchor";
	type = "Special";
	range = 1;
	hasmetal = true;
	damage = "1d10 Bludgeoning PT";
	strreq = 4;
	Trait special;
	special.name = "Special";
	special.effect = "When an enemy is hit with the anchor they must make an agility save. If they fail they are knocked away from you an amount of meters equal to your strength.";
	addtrait(trait.theavy);
	addtrait(special);
}
