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
	Weapon selectedweapon;
	int index;
	cout << "What type of weapon do you want to make. The first letter of each word in a weapon's name should be capitalized. Enter custom to make your own weapon from scratch.\n";
	getline(cin, selection);
	selection[0] = toupper(selection[0]);
	if (selection == "Custom") {
		selectedweapon = custom.makecustom();
		selectedweapon.printtraits();
	}
	else if (find(weapon.weaponnames.begin(), weapon.weaponnames.end(), selection) != weapon.weaponnames.end()) {
		auto it = find(weapon.weaponnames.begin(), weapon.weaponnames.end(), selection);
		index = it - weapon.weaponnames.begin();
		weapon.weapons.at(index).filetraits();
	}
	else {
		cout << "Please enter a weapon name.";
	}
}