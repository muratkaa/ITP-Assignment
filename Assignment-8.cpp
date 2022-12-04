//Murat Karadeniz's Assignment 8    ---------- student no: 1306200011    ---------- date: 28.12.2021
#include <iostream>
using namespace std;


class Box {
private:
	double heigth;
	double width;
	double length;

public:
	Box();

	Box(double heigth, double length, double width);

	~Box();

	void setHeigth(double heigth);
	void setLength(double length);
	void setWidth(double width);
	double getVolume() {
		return heigth * length * width;
	}
};

Box::Box(double h, double l, double w) {
	heigth = h;
	length = l;
	width = w;
	cout << "The parameter constructor is called." << endl;
}
Box::Box() {
	cout << "Default constructor is called." << endl;
}
Box::~Box() {
	cout << "The destructor is called. " << endl;
	cout << "****************" << endl;
}
void Box::setHeigth(double h) {
	heigth = h;
}
void Box::setLength(double l) {
	length = l;
}
void Box::setWidth(double w) {
	width = w;
}


int main() {
	double h, w, l;
	for (int i = 1; i < 11; i++) {
		cout << "Please enter the values of the box that you want to calculate the volume: ";
		cin >> h >> l >> w;
		cout << "*** BOX " << i << " ***" << endl;
		if (i % 2 == 0) {
			Box obji(h, l, w);
			cout << "The volume of box " << i << " is " << obji.getVolume() << endl;
		}
		else {
			Box obji;
			obji.setHeigth(h);
			obji.setLength(l);
			obji.setWidth(w);
			cout << "The volume of box " << i << " is " << obji.getVolume() << endl;

		}
	}

	return 0;



}














