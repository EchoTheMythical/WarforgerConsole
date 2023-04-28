// WarforgerConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Weapon.h"
#include "WeaponsList.h"
#include "Custom.h"
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
	WList weapon;
	Custom custom;
	string selection;
	int index;
	cout << "What type of weapon do you wanna make. Name of weapon in all lowercase or custom for making your own from scratch.\n";
	cin >> selection;
	selection[0] = toupper(selection[0]);
	if (selection == "Custom") {

	}
	else if (find(weapon.weaponnames.begin(), weapon.weaponnames.end(), selection) != weapon.weaponnames.end()) {
		auto it = find(weapon.weaponnames.begin(), weapon.weaponnames.end(), selection);
		index = it - weapon.weaponnames.begin();
		weapon.weapons.at(index).printtraits();
	}
	else {
		cout << "Please enter a weapon name.";
	}
}