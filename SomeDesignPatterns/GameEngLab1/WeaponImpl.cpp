#pragma once
#include "WeaponInterface.h"
class LongAxe : public Weapon {
public:
	void draw() {
		std::cout << "Draw Long Axe" << std::endl;
	}
};

class Repeater : public Weapon {
public:
	void draw() {
		std::cout << "Draw Repeater" << std::endl;
	}
};