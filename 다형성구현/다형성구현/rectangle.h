//-----------------------------------------------------------------
//Rectangle.h	세 점으로 삼각형을 정의할 수 있다
//
// 2024.12.04
//-----------------------------------------------------------------
#pragma once
#include "point.h"		//Point를 Triangle 에서 사용
#include "shape.h"		//Shape를 상속 받음

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	~Rectangle();

	virtual void draw() const override;		//virtual function을 overriding

private:
	Point p1, p2;			 //여기선 왜 초기화를 안 했지
};