#pragma once
#include "Pokemon.h"

class Hitokage :public Pokemon {

public:
	Hitokage();
	~Hitokage() override;
	void Attack() override;
};