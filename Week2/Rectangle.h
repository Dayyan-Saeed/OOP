#pragma once

class Rectangle {

	float h = 5;
	float w = 4;

	float orx, ory;

	float area();

	float parameter();

public:
	void displayArea();

	void displayParameter();
};