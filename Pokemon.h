#pragma once
#include"stdio.h"

class Pokemon {

public:
	Pokemon();
	virtual	~Pokemon();

	virtual void Attack();

protected:

	const char* name_;
};