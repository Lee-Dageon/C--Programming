//-----------------------------------------------------------------
//Point.h	Point class declaration - ��� ������ ��𼭵� �� �� �ִ�
//			2���� ��ǥ (x,y)�� ��Ÿ����
//
// 2024.12.04
//-----------------------------------------------------------------
#ifndef _Point
#define _Point

struct Point {
	double x{}, y{};

	Point();		//������
	Point(double, double);
	Point(const Point&) = default;		//��������� - ����ڰ� ���� �ʿ� ���ٴ� �ǹ�

};


#endif

