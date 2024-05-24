#pragma once
#include"stdio.h" 

class Enemy
{
public:
	  void Approach();
	  void Escape();
	  void Shot();
	  void Update();
private:

	//メンバ関数ポインタのテーブル
	static  void (Enemy::*pFuncTable[])();
};
