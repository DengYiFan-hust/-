#include <iostream>
#include <typeinfo>
#include <iomanip>
typedef unsigned char boolean;
using namespace std;
const double M = 2.54;

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
				cout << "圆形的半径=";
				cin >> r;
				cout << "单位选择\n";
				cout << "--1 英尺\n";
				cout << "--2 厘米\n";
				int i;
				cin >> i;
				switch (i) {
					case 1: {
						r = r * M;
						break;
					}
					case 2:
						break;
				}
				system("cls");
				cout << "圆形的半径:" << r << " CM" << endl;
				ps = new Circle(r);
				cout << "The area of the Circle is :" << fixed << setprecision(3) << ps->getArea() << "平方厘米" << endl << endl;
				delete ps;
			}
			break;

			case 2: {
				double l, w;
				cout << "请输入长方形的长:";
				cin >> l ;
				cout << "请输入长方形的宽:";
				cin >> w;
				cout << "单位选择\n";
				cout << "--1 英尺\n";
				cout << "--2 厘米\n";
				int i;
				cin >> i;
				switch (i) {
					case 1: {
						w = w * M;
						l = l * M;
						break;
					}
					case 2:
						break;
				}
				system("cls");
				cout << "长方形的长=" << l << " CM" << '\n' << "长方形的宽=" << w << " CM" << '\n';
				ps = new Rectangle(l, w);
				cout << "The area of the Rectagle is: " << fixed << setprecision(3) << ps->getArea() << "平方厘米"  << endl << endl;
				delete ps;
			}
			break;

			case 3: {
				double s;
				cout << "请输入正方形的边长=";
				cin >> s;
				cout << "单位选择\n";
				cout << "--1 英尺\n";
				cout << "--2 厘米\n";
				int i;
				cin >> i;
				switch (i) {
					case 1: {
						s = s * M;
						break;
					}
					case 2:
						break;
				}
				system("cls");
				cout << "正方形的边长=" << s << " CM" << '\n';
				ps = new Square(s);
				cout << "The area of the Square is :" << fixed << setprecision(3) << ps->getArea() << "平方厘米"  << endl << endl;
				delete ps;
			}
			break;

			case 4: {
				double h, l;
				cout << "请输入三角形的底边长=";
				cin >> l ;
				cout << "请输入三角形的高=";
				cin >> h;
				cout << "单位选择\n";
				cout << "--1 英尺\n";
				cout << "--2 厘米\n";
				int i;
				cin >> i;
				switch (i) {
					case 1: {
						h = h * M;
						l = l * M;
						break;
					}
					case 2:
						break;
				}
				system("cls");
				cout << "三角形的底边长=" << l << " CM" << endl;
				cout << "三角形的高=" << h << " CM" << endl;
				ps = new Triangle(l, h);
				cout << "The area of the Triangle is :" << fixed << setprecision(3) << ps->getArea() << "平方厘米" << endl << endl;
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