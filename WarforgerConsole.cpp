// WarforgerConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Weapon.h"
#include "WeaponsList.h"
#include "Custom.h"
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	WList weapon;
	Custom custom;
	string selection;
	weapon.greatsword.printtraits();
	cout << "What type of weapon do you wanna make. Name of weapon in all lowercase or custom for making your own from scratch.";
	cin >> selection;
	if (selection == "custom") {

	}
	else if (count(weapon.weapons.begin(), weapon.weapons.end(), selection)) {
		
	}
	else {
		cout << "Please enter a weapon name.";
	}
}