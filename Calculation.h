#pragma once
#include"stdio.h"
template <typename Type1, typename Type2>

class Calculation {

public:

	//�����o�ϐ�
	Type1 a;
	Type2 b;

	//�R���X�g���N�^
	Calculation(Type1 a, Type2 b) :a(a), b(b) {};

	//2�̈����̒l���ׂď������ق��̒l��Ԃ�
	Type1 Min() {
		if (a <= b) {//�߂�l�͈����ɂ���ĕω�����̂ŃL���X�g���g���Đ�����
			return	static_cast<Type1> (a);
		}
		else {
			return static_cast<Type1> (b);
		}
	}
};
