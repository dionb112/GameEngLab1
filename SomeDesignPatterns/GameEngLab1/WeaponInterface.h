#pragma once
#include <iostream>
class Weapon {
public:
	Weapon() {}
	virtual ~Weapon() {}
	virtual void draw() = 0;
};

