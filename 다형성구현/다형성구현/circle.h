//-----------------------------------------------------------------
//Circle.h	중심점의 좌표와 반지름으로 원을 정의할 수 있다
//
// 2024.12.04
//-----------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

//위의 두 include 대신에 다음과 같이 forward declaration 할 수도 있다
//struct Point;
//class Shape; 

class Circle : public Shape {
public:
	Circle();
	Circle(const Point& h, double);
	Circle(const Circle&);		//깊은 복사를 할 필요가 없다면 프로그래머가 복사생성자를
								//프로그램할 필요는 없다.
								//만약 어떤 이유로 프로그램해야 한다면 메모리를 이해하고
								//코딩해야 한다.

	//위 설명을 다음 줄과 같이 선언하여 대체하거나 생략할 수 있다
	//Circle( const Circle& ) = default;
	~Circle();					//소멸자를 프로그램할 필요가 없다는 것을 생각해 보자

	virtual void draw() const override;

private:
	Point center{};				//중심점의 좌표
	double rad{};				//반지름


};