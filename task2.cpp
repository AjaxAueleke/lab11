#include <iostream>
using namespace std;


class Shape
{
	public:
		virtual double getArea() = 0;
};

class Rectangle: public Shape
{
	double length = 15;
	double breadth = 20;
	public:
		double getArea() 
		{
			return this->length * this->breadth;
		}
};

class Triangle : public Shape
{
	double base = 12;
	double height = 20;
	public: 
	double getArea()
	{
		return 0.5 * this->base * this->height;
	}

};

int main()
{
	Shape *b = new Triangle();
	Shape *a = new Rectangle();
cout <<	b->getArea() << endl;
cout <<	a->getArea() << endl;
}
