#ifndef _WEAPONS_
#define _WEAPONS_

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Weapon{
public:
	string name;
	string type;
	int range;
	bool hasmetal = false;
	bool haswood = false;
	bool hascloth = false;
	bool hasleather = false;
	string damage;
	vector<string> traits;
	string specialeffect;
	int strreq;
	inline void addtrait(string trait){
		traits.push_back(trait);
	}
	inline void printtraits() {
		cout << name << " - " << type << "\n"
			<< range << " Meters" << "\n"
			<< damage << "\n";
		for (int i = 0; i < traits.size(), i++;) {
			cout << traits.at(i) << ", ";
			if (i = traits.size() - 1) cout << "\n";
		}
	}
};
#endif