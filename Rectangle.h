#pragma once
#include"IShape.h"


class Rectangle :public IShape
{
public:
	Rectangle(const float& width, const float& height);
	~Rectangle();

	void Size()override;
	void  Draw() override;


private:
     float  width_;//‰¡•
	 float height_;//c•
    	float area;//–ÊÏ
};