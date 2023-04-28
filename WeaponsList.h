#include "Weapon.h"
#include "Greatsword.h"
#include "Longsword.h"
#include "Rapier.h"
class WList {
public:
	Greatsword greatsword;
	Longsword longsword;
	Rapier rapier;

	vector<string> weaponnames = {greatsword.name, longsword.name, rapier.name};
	vector<Weapon> weapons = { greatsword, longsword, rapier};
};