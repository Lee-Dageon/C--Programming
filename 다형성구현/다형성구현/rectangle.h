//-----------------------------------------------------------------
//Rectangle.h	�� ������ �ﰢ���� ������ �� �ִ�
//
// 2024.12.04
//-----------------------------------------------------------------
#pragma once
#include "point.h"		//Point�� Triangle ���� ���
#include "shape.h"		//Shape�� ��� ����

class Rectangle : public Shape {
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	~Rectangle();

	virtual void draw() const override;		//virtual function�� overriding

private:
	Point p1, p2;			 //���⼱ �� �ʱ�ȭ�� �� ����
};