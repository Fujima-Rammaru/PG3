#include "Enemy.h"
#include"stdio.h"

void Enemy::Approach()
{
	printf("�G���ڋ�\n");
}

void Enemy::Escape()
{
	printf("�G�����E\n");
}

void Enemy::Shot()
{
	printf("�G�̎ˌ�\n");
}

void (Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,//�֐��̃A�h���X��������
	&Enemy::Shot,
	&Enemy::Escape
};

void Enemy::Update() {
	for (size_t i = 0; i<3; i++) {
		(this->*pFuncTable[i])();//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	}
}


 


