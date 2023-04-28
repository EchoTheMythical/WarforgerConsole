#ifndef _WEAPONS_
#define _WEAPONS_

#include <iostream>
#include <string>
#include <vector>
#include "Trait.h"
#include "TraitsList.h"
using namespace std;
class Weapon{
public:
	TList trait;
	string name;
	string type;
	int range;
	bool hasmetal = false;
	bool haswood = false;
	bool hascloth = false;
	bool hasleather = false;
	string damage;
	vector<Trait> traits{};
	int strreq;
	inline void addtrait(Trait trait){
		traits.push_back(trait);
	}
	inline void printtraits() {
		cout << name << " - " << type << "\n"
			<< range << " Meters" << "\n"
			<< damage << "\n";
		for (int i = 0; i < traits.size(); i++) {
			cout << traits.at(i).name;
			if (i < traits.size() - 1) cout << ", ";
			else cout << "\n";
		}
		for (int i = 0; i < traits.size(); i++) {
			cout << traits.at(i).effect << "\n";
		}
	}
};
#endif