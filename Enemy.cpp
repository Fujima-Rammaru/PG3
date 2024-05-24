#include "Enemy.h"
#include"stdio.h"

void Enemy::Approach()
{
	printf("敵が接近\n");
}

void Enemy::Escape()
{
	printf("敵が離脱\n");
}

void Enemy::Shot()
{
	printf("敵の射撃\n");
}

void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,//関数のアドレスを代入する
	&Enemy::Shot,
	&Enemy::Escape
};

void Enemy::Update() {
	for (size_t i = 0; i<3; i++) {
		(this->*pFuncTable[i])();//メンバ関数ポインタに入っている関数を呼び出す
	}
}


 


