#pragma once
#include <iostream>
class Weapon {
public:
	Weapon() {}
	virtual ~Weapon() {}
	virtual void draw() = 0;
};
class LongAxe : public Weapon {
public:
	~LongAxe();
	void draw();
};

class Repeater : public Weapon {
public:
	~Repeater();
	void draw();
};

