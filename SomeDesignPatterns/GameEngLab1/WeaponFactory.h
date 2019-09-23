#pragma once
#include "WeaponImpl.cpp"
#include "FactoryInterface.h"
class WeaponFactory : public Factory {
public:
	Weapon* CreateLongAxe() {
		return new LongAxe;
	}
	Weapon* CreateRepeater() {
		return new Repeater;
	}
	
};