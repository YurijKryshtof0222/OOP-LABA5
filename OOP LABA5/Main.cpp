#include <iostream>
#include <iomanip>

#include "Classes.cpp"

using namespace std;

int main()
{
	//setlocale(LC_ALL, "Ukrainian");
	cout << setw(50) << setfill('-') << "Late binding demo" << setw(15) << "" << endl << endl;

	Circumference* circumference = new Circumference(3);
    Circle* circle = new Circle(3);
	Cylinder* cylinder = new Cylinder(3, 2);

	cout << "Using var with Figure data type as a pointer" << endl << endl;
	Figure* fig;
	fig = circumference;
	fig->calculate();
	fig = circle;
	fig->calculate();
	fig = cylinder;
	fig->calculate();

	cout << endl << endl << "Using var with Circle data type as a pointer" << endl << endl;
	fig = new Circle(4);
	fig->calculate();
	fig = new Cylinder(2, 3);
	fig->calculate();

	cout << endl;

	system("pause");
	return 0;
}