//-----------------------------------------------------------------
//ShapeManager.cpp		//���� ���� ������ �����ϴ� Ŭ����	
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
}

ShapeManager::~ShapeManager()
{
	// ��� ��ü�� ��Ȯ�ϰ� �����Ǵ��� �ݵ�� Ȯ��
	delete[] shapes;		//���������ڰ� �����ϴ� ������ �Ҹ��ڸ� ȣ����
}

void ShapeManager::insert(Shape* a) {
	shapes[nShape] = a;
	nShape++;
}

void ShapeManager::draw() const
{
	cout << "---------------------------------" << endl;
	cout << "�����ϴ� ��� ������ �׸��ϴ�." << endl;
	cout << "�ִ�" << capacity << "���� ������ ���� �� �ֽ��ϴ�." << endl;
	cout << "���" << nShape << "���� ������ �ֽ��ϴ�" << endl;
	cout << "---------------------------------" << endl;

	for (int i = 0; i < nShape; ++i) {
		cout << "[" << i << "]";
		shapes[i]->draw();			//�������� �����ȴ�.
	}

	cout << '\n';

	cout << "---------------------------------" << endl;
	cout << "�׸��⸦ ��Ĩ�ϴ�" << endl;
	cout << "---------------------------------" << '\n' << endl;

}