#include "stdafx.h"
#include "iostream"
#include "MyPoint.h"
#include "string.h"

MyPoint::MyPoint() {};
MyPoint::MyPoint(int x, int y)
{
	mPosX = x;
	mPosY = y;
}

void MyPoint::Display() {
	std::cout << "Value mPosX = " << mPosX;
	std::cout << "Value mPosY = " << mPosY;
}


int main() {
	return 0 ;
}
