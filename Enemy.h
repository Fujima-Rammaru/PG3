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

	//�����o�֐��|�C���^�̃e�[�u��
	static  void (Enemy::*pFuncTable[])();
};
