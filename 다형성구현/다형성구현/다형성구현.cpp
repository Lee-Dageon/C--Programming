//-----------------------------------------------------------------
//����������.cpp
// 
// �˾ƺ��� �� ��
//		- �������̶� �����ΰ�?
//		- C++ ������ ��� �������� �����ϴ°�?
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
	//�� ���α׷��� ������Ʈ�� Ȯ���ϱ� ���� ���̴�.
	//�ǽ� ������� ������ �ذ��� ����.

	//1. ���� Ŭ������ ����
	ShapeManager sm(100);		//�ִ� 100���� ������ ������
	int choice;

	//2. �������� ���� Ŭ������ ������
	sm.insert(new Triangle());
	sm.insert(new Triangle(Point(0, 0), Point(1, 1), Point(2, 2)));
	sm.insert(new Circle(Point(1.23, 4.56), 7.89));

	for (int i = 0; i < 10; ++i)
		sm.insert(new Rectangle(Point(i, i + 1), Point(i * 2, i * 3)));

	//�����ϰ� �ִ� ��� ������ �׸�
	sm.draw();


	do {
		std::cout << "\n�޴��� �����ϼ���:\n";
		std::cout << "1. �ﰢ�� �߰�\n";
		std::cout << "2. �簢�� �߰�\n";
		std::cout << "3. �� �߰�\n";
		std::cout << "4. ��ü ���� �׸���\n";
		std::cout << "5. ���α׷� ����\n";
		std::cout << "����: ";
		std::cin >> choice;

		switch (choice) {
		case 1: {
			std::cout << "�ﰢ�� �߰� ��...\n";
			sm.insert(new Triangle());
			break;
		}

		case 2: {
			double x1, y1, x2, y2;
			std::cout << "�簢�� ��ǥ �Է� (���� �� x, y / ������ �Ʒ� x, y): ";
			std::cin >> x1 >> y1 >> x2 >> y2;
			sm.insert(new Rectangle(Point(x1, y1), Point(x2, y2)));
			break;
		}

		case 3: {
			double cx, cy, radius;
			std::cout << "���� �߽� ��ǥ�� ������ �Է� (x, y, r): ";
			std::cin >> cx >> cy >> radius;
			sm.insert(new Circle(Point(cx, cy), radius));
			break;
		}

		case 4:
			std::cout << "��ü ������ �׸�...\n";
			sm.draw();
			break;

		case 5:
			std::cout << "���α׷� ���� ��...\n";
			exit(0);

		default:
			std::cout << "�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n";
			break;


		}

	} while (choice != 5);
}

	


	// �� ���α׷����� �߸��� ���� ã�� �� �ִ°�?

