#include "stdafx.h"
#include "iostream"
#include "MyPoint.h"
#include "string.h"
#include "math.h"

using namespace std;

MyPoint::MyPoint() {
	mPosX = 0;
	mPosY = 0;
};
MyPoint::MyPoint(int x, int y)
{
	mPosX = x;
	mPosY = y;
}

void MyPoint::Display() {
	cout << "Value mPosX = " << mPosX<<endl;
	cout << "Value mPosY = " << mPosY<<endl;
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
	cout<<"Distance between 2 points is: "<< p1->Distance(p2)<<endl;
	system("pause");
	return 0 ;
}
