#include<stdio.h>
#include"Hitokage.h"
#include"Zenigame.h"

int main() {
	Pokemon* pokemons[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			pokemons[i] = new Hitokage;
		}
		else {
			pokemons[i] = new Zenigame;
		}
	}

	for (int i = 0; i < 2; i++) {
		pokemons[i]->Attack();
	}

	for (int i = 0; i < 2; i++) {
		pokemons[i]->~Pokemon();
	}

	return 0;
}