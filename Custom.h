#include "Weapon.h";
using namespace std;
class Custom {
public:
	Weapon custom;
	inline void makecustom() {
		cout << "Enter the weapon name \n";
		cin >> custom.name;
		cout << "Enter the weapon type \n";
		cin >> custom.type;
		cout << "Enter the weapon range \n";
		cin >> custom.range;
		cout << "Enter the weapon damage \n";
		cin >> custom.damage;
		cout << "Does the weapon have metal slots(enter True or False) \n";
		cin >> custom.hasmetal;
	}
};