#pragma once
#include"IShape.h"

class Circle :public IShape
{
public:
	Circle(const float& radius);
	~Circle();

	void Size() override;
	void  Draw() override;

private:
	float area;//�ʐ�
	float radius_;//���a

};
