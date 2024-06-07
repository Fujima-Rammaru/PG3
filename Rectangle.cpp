#include "Rectangle.h"
#include "stdio.h"
Rectangle::Rectangle(const float& width, const float& height)
{
	width_ = width;
	height_ = height;
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	area = width_ * height_;
}

void Rectangle::Draw()
{
	Size();
	printf("ãÈå`ÇÃñ êœ=%5.2f\n", area);
}
