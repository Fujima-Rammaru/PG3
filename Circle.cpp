#include"Circle.h"
#define _USE_MATH_DEFINES
#include"math.h"
#include "stdio.h"

Circle::Circle(const float& radius)
{
	radius_ = radius;
}

Circle::~Circle()
{
}

void Circle::Size()
{
	area = radius_ * radius_ * float(M_PI);
}

void Circle::Draw()
{
	Size();
	printf("â~ÇÃñ êœ=%5.2f\n", area);
}
