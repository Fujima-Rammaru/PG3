#pragma once
#include "Pokemon.h"

class Zenigame :public Pokemon {

public:
	Zenigame();
	~Zenigame() override;
	void Attack() override;
};