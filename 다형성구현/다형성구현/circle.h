//-----------------------------------------------------------------
//Circle.h	�߽����� ��ǥ�� ���������� ���� ������ �� �ִ�
//
// 2024.12.04
//-----------------------------------------------------------------
#pragma once
#include "point.h"
#include "shape.h"

//���� �� include ��ſ� ������ ���� forward declaration �� ���� �ִ�
//struct Point;
//class Shape; 

class Circle : public Shape {
public:
	Circle();
	Circle(const Point& h, double);
	Circle(const Circle&);		//���� ���縦 �� �ʿ䰡 ���ٸ� ���α׷��Ӱ� ��������ڸ�
								//���α׷��� �ʿ�� ����.
								//���� � ������ ���α׷��ؾ� �Ѵٸ� �޸𸮸� �����ϰ�
								//�ڵ��ؾ� �Ѵ�.

	//�� ������ ���� �ٰ� ���� �����Ͽ� ��ü�ϰų� ������ �� �ִ�
	//Circle( const Circle& ) = default;
	~Circle();					//�Ҹ��ڸ� ���α׷��� �ʿ䰡 ���ٴ� ���� ������ ����

	virtual void draw() const override;

private:
	Point center{};				//�߽����� ��ǥ
	double rad{};				//������


};