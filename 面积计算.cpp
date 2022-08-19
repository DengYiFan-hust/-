#include <iostream>
#include <typeinfo>
typedef unsigned char boolean;
using namespace std;

class Shape {
	public:
		Shape() {}
		virtual double getArea() = 0;
};

class Rectangle: public Shape {
	public:
		double x, y;
		Rectangle(double a, double b) {
			x = a;
			y = b;
		}
		double getArea() {
			return x * y;
		}
		Rectangle() {}
};


class Circle : public Shape {
	public:
		double R;
		const double PI = 3.14;
		Circle(double a) {
			R = a;
		}
		double getArea() {
			return PI * R * R;
		}
		Circle() {}
};

class Square : public Shape {
	public:
		double k;
		Square(double a) {
			k = a;
		}
		double getArea() {
			return k * k;
		}
		Square() {}
};

class Triangle : public Shape {
	public:
		double x, y;
		Triangle(double a, double b) {
			x = a;
			y = b;
		}
		double getArea() {
			return x * y / 2;
		}
		Triangle() {}
};

int main() {
	Shape *ps;
	Rectangle *pr;
	boolean flag = true;
	while (flag) {
		cout << "------------------------ ��ѡ������ͼ�Σ�------------------------------\n";
		cout << "-------------------------- 1 Բ  ��--------------------------------------\n";
		cout << "-------------------------- 2 ������--------------------------------------\n";
		cout << "-------------------------- 3 ������--------------------------------------\n";
		cout << "-------------------------- 4 ������--------------------------------------\n";
		cout << "-------------------------- 5 ��  ��--------------------------------------\n";
		int o;
		cout << "��ѡ��:";
		cin >> o;
		system("cls");

		switch (o) {
			case 1: {
				double r;
				cout << "������Բ�εİ뾶:";
				cin >> r;
				system("cls");
				ps = new Circle(r);
				cout << "The area of the Circle is :" << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 2: {
				double l, w;
				cout << "�����볤���εĳ�:";
				cin >> l ;
				cout << "�����볤���εĿ�:";
				cin >> w;
				system("cls");
				ps = new Rectangle(l, w);
				cout << "The area of the Rectagle is: " << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 3: {
				double s1;
				cout << "�����������εı߳�:";
				cin >> s1;
				system("cls");
				ps = new Square(s1);
				cout << "The area of the Square is :" << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 4: {
				double h, l;
				cout << "�����������εĵױ߳�:";
				cin >> l ;
				cout << "�����������εĸ�:";
				cin >> h;
				system("cls");
				ps = new Triangle(l, h);
				cout << "The area of the Triangle is :" << ps->getArea() << endl << endl;
				delete ps;
			}
			break;
			case 5:
				flag = false;
				break;
			default:
				break;
		}
	}
	system("pause");
	return 0;
}