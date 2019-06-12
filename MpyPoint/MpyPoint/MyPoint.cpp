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

void MyPoint::SetX(int x) {
	mPosX = x;
}

int MyPoint::GetX() {
	return mPosX;
}
int main() {
	return 0 ;
}
