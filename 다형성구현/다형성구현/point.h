//-----------------------------------------------------------------
//Point.h	Point class declaration - 헤더 파일은 어디서든 볼 수 있다
//			2차원 좌표 (x,y)를 나타낸다
//
// 2024.12.04
//-----------------------------------------------------------------
#ifndef _Point
#define _Point

struct Point {
	double x{}, y{};

	Point();		//생성자
	Point(double, double);
	Point(const Point&) = default;		//복사생성자 - 사용자가 만들 필요 없다는 의미

};


#endif

