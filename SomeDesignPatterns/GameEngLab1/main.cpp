#include <iostream>
#include "FactoryInterface.h"
#include "WeaponFactory.h"
#include "DrawInterface.h"
#include "DrawImpl.cpp"
#include "AttireInterface.h"
#include "HoodedCloak.cpp"
#include "GraphicProxy.h"
int main() {
	// Abstract Factory Pattern
	Factory* myFirstFactory = new WeaponFactory;
	std::vector<Weapon*> weapons;
	weapons.push_back(myFirstFactory->CreateLongAxe());
	weapons.push_back(myFirstFactory->CreateRepeater());
	for (Weapon* weapon : weapons) {
		weapon->draw();
	}
	// Bridge Pattern
	Draw* api = new DrawImpl();
	Attire* hoodedCloak = new HoodedCloak(api);
	hoodedCloak->draw();
	// Proxy Pattern
	GraphicProxy graphicProxy;
	graphicProxy.draw();


}
