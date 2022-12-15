#include <iostream>

using namespace std;

class Figure 
{
public:
	virtual void calculate() = 0;
};

class Circumference : public Figure
{
private:
	int radius;
public:
	Circumference(int radius)
	{
		this->radius = 1;
		setRadius(radius);
	}
	
	virtual void calculate()
	{
		double result = 2 * 3.141 * radius;
		cout << "Circumference::circuit = " << result << endl;
	}

	int getRadius() 
	{
		return radius;
	}

	void setRadius(int radius)
	{
		if (radius > 0) 
		{
			this->radius = radius;
		}  
	}
};

class Circle : public Circumference
{
public:
	Circle(int radius) : Circumference(radius)
	{
	}

	virtual void calculate()
	{
		double result = 3.141 * getRadius() * getRadius();
		cout << "Circle::area = " << result << endl;
	}
};

class Cylinder : public Circle
{
private:
	int height;
public:
	Cylinder(int radius, int height) : Circle(radius)
	{
		this->height = 1;
		setHeight(height);
	}

	virtual void calculate()
	{
		double result =	((3.141 * getRadius() * getRadius()) * height);
		cout << "Cylinder::volume= " << result << endl;
	}

	int getHeight()
	{
		return height;
	}

	void setHeight(int height)
	{
		if (height > 0)
		{
			this->height = height;
		}
	}
};