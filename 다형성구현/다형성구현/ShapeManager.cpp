//-----------------------------------------------------------------
//ShapeManager.cpp		//여러 개의 됴형을 관리하는 클래스	
//
// 2024.12.04
//-----------------------------------------------------------------
#include <iostream>
#include "shapeManager.h"
using namespace std;

ShapeManager::ShapeManager(int n)
{
	nShape = 0;
	capacity = n;
	shapes = new Shape* [capacity];

	std::cout << "ShapeManager 기본생성자" << this << std::endl;
}

ShapeManager::~ShapeManager()
{

	for (int i = 0; i < nShape; ++i) {
		if (shapes[i]) {
			std::cout << "소멸 중: shapes[" << i << "] -> " << shapes[i] << std::endl;
			delete shapes[i];  // 각 도형 객체의 소멸자 호출
		}
	}

	// 모든 객체가 정확하게 삭제되는지 반드시 확인
	delete[] shapes;		//도형관리자가 관리하는 도형의 소멸자를 호출함

}

void ShapeManager::insert(Shape* a) {
	shapes[nShape] = a;
	nShape++;
}

void ShapeManager::draw() const
{
	cout << "---------------------------------" << endl;
	cout << "관리하는 모든 도형을 그립니다." << endl;
	cout << "최대" << capacity << "개의 도형을 담을 수 있습니다." << endl;
	cout << "모두" << nShape << "개의 도형이 있습니다" << endl;
	cout << "---------------------------------" << endl;

	for (int i = 0; i < nShape; ++i) {
		cout << "[" << i << "]";
		shapes[i]->draw();			//다형성이 구현된다.
	}

	cout << '\n';

	cout << "---------------------------------" << endl;
	cout << "그리기를 마칩니다" << endl;
	cout << "---------------------------------" << '\n' << endl;

}