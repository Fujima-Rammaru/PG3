#pragma once
#include"stdio.h"
template <typename Type1, typename Type2>

class Calculation {

public:

	//メンバ変数
	Type1 a;
	Type2 b;

	//コンストラクタ
	Calculation(Type1 a, Type2 b) :a(a), b(b) {};

	//2つの引数の値を比べて小さいほうの値を返す
	Type1 Min() {
		if (a <= b) {//戻り値は引数によって変化するのでキャストを使って整える
			return	static_cast<Type1> (a);
		}
		else {
			return static_cast<Type1> (b);
		}
	}
};
