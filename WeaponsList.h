#include "Weapon.h"
#include "Greatsword.h"
#include "Longsword.h"
#include "Rapier.h"
#include "Syringe.h"
#include "CombatAnchor.h"
class WList {
public:
	Greatsword greatsword;
	Longsword longsword;
	Rapier rapier;
	Syringe syringe;
	CombatAnchor combatanchor;

	vector<string> weaponnames = {greatsword.name, longsword.name, rapier.name, syringe.name, combatanchor.name};
	vector<Weapon> weapons = { greatsword, longsword, rapier, syringe, combatanchor};
};