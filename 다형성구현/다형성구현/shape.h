//-----------------------------------------------------------------
//Shape.h		class Shape - Virtual Base Class
//				�� Ŭ������ �߻� Ŭ����(abstract class) �̴�
//
// 2024.12.04
//-----------------------------------------------------------------
#ifndef _Shape		//_Shape�� �տ��� ���ǵ��� �ʾҴٸ�
#define _Shape		//_Shape �� �����Ѵ�

class Shape {
public:
	Shape() {};
	~Shape() {};

	virtual void draw() const = 0;		//pure virtual function
};


#endif
