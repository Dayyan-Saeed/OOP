#pragma once

class Rectangle {

	float l = 5;
	float w = 4;

	float orx, ory;

	float area();

	float parameter();

public:
	void displayArea();

	void displayParameter();

	void setLenght(float);
	void setWidth(float);
	void setOriginX(float);
	void setOriginY(float);

	void setData(float, float, float, float);

	float getLength();
	float getWidth();
	float getOriginX();
	float getOriginY();

	Rectangle();
	Rectangle(float, float);
	Rectangle(float, float, float, float);
};