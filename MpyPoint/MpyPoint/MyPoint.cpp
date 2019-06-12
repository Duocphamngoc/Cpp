#include "stdafx.h"
#include "iostream"
#include "MyPoint.h"
#include "string.h"
#include "math.h"

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

void MyPoint::SetY(int y) {
	mPosY = y;
}

int MyPoint::GetY() {
	return mPosY;
}

float MyPoint::Distance(MyPoint* p) {
	int witdh, lenth;
	witdh = abs(this->mPosX - p->mPosX);
	lenth = abs(this->mPosY - p->mPosY);
	float distance = sqrt(abs(witdh*witdh-lenth*lenth));
	return distance;
}

int main() {
	MyPoint* p1 = new MyPoint(12, 14);
	MyPoint* p2 = new MyPoint(5, 6);
	std::cout<<"Distance between 2 points is: "<< p1->Distance(p2);
	system("pause");
	return 0 ;
}
