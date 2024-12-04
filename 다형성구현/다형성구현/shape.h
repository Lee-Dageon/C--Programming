//-----------------------------------------------------------------
//Shape.h		class Shape - Virtual Base Class
//				이 클래스는 추상 클래스(abstract class) 이다
//
// 2024.12.04
//-----------------------------------------------------------------
#ifndef _Shape		//_Shape이 앞에서 정의되지 않았다면
#define _Shape		//_Shape 을 정의한다

class Shape {
public:
	Shape() {};
	~Shape() {};

	virtual void draw() const = 0;		//pure virtual function
};


#endif
