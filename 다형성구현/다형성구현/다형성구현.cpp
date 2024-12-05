//-----------------------------------------------------------------
//다형성구현.cpp
// 
// 알아봐야 할 것
//		- 다형성이란 무엇인가?
//		- C++ 언어에서는 어떻게 다형성을 구현하는가?
//
// 2024.12.04
//-----------------------------------------------------------------
#include <iostream>
#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "ShapeManager.h"

int main()
{
	//이 프로그램은 프로젝트를 확인하기 위한 것이다.
	//실습 순서대로 문제를 해결해 보자.

	//1. 관리 클래스를 만듦
	ShapeManager sm(100);		//최대 100개의 도형을 관리함
	int choice;

	//2. 도형들을 관리 클래스에 삽입함
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i)
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));

	//관리하고 있는 모든 도형을 그림
	sm.draw();


	do {
		std::cout << "\n메뉴를 선택하세요:\n";
		std::cout << "1. 삼각형 추가\n";
		std::cout << "2. 사각형 추가\n";
		std::cout << "3. 원 추가\n";
		std::cout << "4. 전체 도형 그리기\n";
		std::cout << "5. 프로그램 종료\n";
		std::cout << "선택: ";
		std::cin >> choice;

		switch (choice) {
		case 1: {
			std::cout << "삼각형 추가 중...\n";
			sm.insert(new Triangle());
			break;
		}

		case 2: {
			double x1, y1, x2, y2;
			std::cout << "사각형 좌표 입력 (왼쪽 위 x, y / 오른쪽 아래 x, y): ";
			std::cin >> x1 >> y1 >> x2 >> y2;
			sm.insert(new Rectangle(Point(x1, y1), Point(x2, y2)));
			break;
		}

		case 3: {
			double cx, cy, radius;
			std::cout << "원의 중심 좌표와 반지름 입력 (x, y, r): ";
			std::cin >> cx >> cy >> radius;
			sm.insert(new Circle(Point(cx, cy), radius));
			break;
		}

		case 4:
			std::cout << "전체 도형을 그림...\n";
			sm.draw();
			break;

		case 5:
			std::cout << "프로그램 종료 중...\n";
			exit(0);

		default:
			std::cout << "잘못된 선택입니다. 다시 시도하세요.\n";
			break;


		}

	} while (choice != 5);
}

	


	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?

