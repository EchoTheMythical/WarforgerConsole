#include "Weapon.h";
using namespace std;
class Custom {
public:
	Weapon custom;
	Weapon makecustom() {
		string loop = " ";
		int index;
		TList trait;
		Trait special;
		string wmlc = "y";
		special.name = "Special";
		cout << "Enter the weapon name.\n";
		getline(cin, custom.name);
		cout << "Enter the weapon type.\n";
		getline(cin, custom.type);
		cout << "Enter the weapon range. Int\n";
		cin >> custom.range;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		while( wmlc != "none") {
			cout << "what material types does your weapon have. enter none to stop.\n";
		getline(cin, wmlc);
		if (wmlc == "metal") {
			custom.hasmetal = true;
		}
		else if (wmlc == "wood") {
			custom.haswood = true;
		}
		else if (wmlc == "leather") {
			custom.hasleather = true;
		}
		else if (wmlc == "cloth") {
			custom.hascloth = true;
		}
		else if (wmlc != "none") {
			cout << "please enter a material type name in all lowercase or none to stop.\n";
		}
		}
		cout << "Enter the weapon damage.\n";
		getline(cin, custom.damage);
		while (loop != "none") {
			cout << "enter a trait name that your weapon has. The first letter should be capitalized. If you type in Special you can make your own but you can only have one special per weapon. Enter none to stop.\n";
			cin >> loop;
			if (loop != "none") {
				if (loop == "Special") {
					cout << "Enter the special effect. \n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					getline(cin, special.effect);
					custom.addtrait(special);
				}
				else if (find(trait.traitnames.begin(), trait.traitnames.end(), loop) != trait.traitnames.end()) {
					auto it = find(trait.traitnames.begin(), trait.traitnames.end(), loop);
					index = it - trait.traitnames.begin();
					custom.addtrait(trait.traits.at(index));
				}
			}
		}
		return custom;
	}
};