#include "Weapon.h"
#include "Greatsword.h"
#include "Longsword.h"
#include "Rapier.h"
class WList {
public:
	Greatsword greatsword;
	Longsword longsword;
	Rapier rapier;

	vector<Weapon> weapons = {greatsword, longsword, rapier};
};