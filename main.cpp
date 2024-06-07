#include"Circle.h"
#include "Rectangle.h"
int main() {
	IShape* iShape[2];
	iShape[0] = new Rectangle(5.2, 3.0);
	iShape[1] = new Circle(3.0f);

	for (size_t i = 0; i < 2; i++) {
		iShape[i]->Draw();
	}

	for (size_t i = 0; i < 2; i++)
	{
		delete iShape[i];
	}

	return 0;
}