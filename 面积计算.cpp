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
		cout << "------------------------ 请选择计算的图形：------------------------------\n";
		cout << "-------------------------- 1 圆  形--------------------------------------\n";
		cout << "-------------------------- 2 长方形--------------------------------------\n";
		cout << "-------------------------- 3 正方形--------------------------------------\n";
		cout << "-------------------------- 4 三角形--------------------------------------\n";
		cout << "-------------------------- 5 退  出--------------------------------------\n";
		int o;
		cout << "请选择:";
		cin >> o;
		system("cls");

		switch (o) {
			case 1: {
				double r;
				cout << "请输入圆形的半径:";
				cin >> r;
				system("cls");
				ps = new Circle(r);
				cout << "The area of the Circle is :" << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 2: {
				double l, w;
				cout << "请输入长方形的长:";
				cin >> l ;
				cout << "请输入长方形的宽:";
				cin >> w;
				system("cls");
				ps = new Rectangle(l, w);
				cout << "The area of the Rectagle is: " << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 3: {
				double s1;
				cout << "请输入正方形的边长:";
				cin >> s1;
				system("cls");
				ps = new Square(s1);
				cout << "The area of the Square is :" << ps->getArea() << endl << endl;
				delete ps;
			}
			break;

			case 4: {
				double h, l;
				cout << "请输入三角形的底边长:";
				cin >> l ;
				cout << "请输入三角形的高:";
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