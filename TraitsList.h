#include "DiHanded.h"
#include "Long.h"
#include "Dexterous.h"
#include "Momentum.h"
#include "Stance.h"
#include "Heavy.h"
class TList {
public:
	DiHanded tdiHanded;
	Long tlong;
	Dexterous tdexterous;
	Momentum tmomentum;
	Stance tstance;
	Heavy theavy;

	vector<string> traitnames{tdiHanded.name, tlong.name, tdexterous.name, tmomentum.name, tstance.name, theavy.name};
	vector<Trait> traits{tdiHanded, tlong, tdexterous, tmomentum, tstance, theavy };
};
