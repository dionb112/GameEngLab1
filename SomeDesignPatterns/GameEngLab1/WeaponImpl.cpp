#pragma once
#include "WeaponInterface.h"

LongAxe::~LongAxe()
{
	if (this)
	{
		delete this;
	}
}

void LongAxe::draw()
{
	std::cout << "Draw Long Axe" << std::endl;
}

Repeater::~Repeater()
{
	if (this)
	{
		delete this;
	}
}

void Repeater::draw()
{
	std::cout << "Draw Repeater" << std::endl;
}

