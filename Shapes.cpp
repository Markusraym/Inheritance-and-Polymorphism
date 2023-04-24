#include "Shapes.h"
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*==== 2D SHAPES ====*/

void Shape2D::ShowArea() const
{
	cout << "The area of the " << GetName2D() << " is: " << Area() << endl;
}

bool Shape2D::operator>(const Shape2D& rhs) const
{
	bool greaterThan = false;
	if (this->Area() > rhs.Area())
	{
		greaterThan = true;
		return greaterThan;
	}
	else
	{
		return greaterThan;
	}
}
bool Shape2D::operator<(const Shape2D& rhs) const
{
	bool lessThan = false;
	if (this->Area() < rhs.Area())
	{
		lessThan = true;
		return lessThan;
	}
	else
	{
		return lessThan;
	}
}

bool Shape2D::operator==(const Shape2D& rhs) const
{
	bool equalTo = false;
	if (this->Area() == rhs.Area())
	{
		equalTo = true;
		return equalTo;
	}
	else
	{
		return equalTo;
	}
}

/*===== SQUARE =====*/

Square::Square()
{
	sideLength = 0;
}

Square::Square(float _sideLength)
{
	sideLength = _sideLength;
}

void Square::Scale(float scaleFactor)
{
	sideLength = sideLength * scaleFactor;
}

void Square::Display() const
{
	cout << "The area of the " << GetName2D() << " is : " << Area() << endl;
	cout << "Length of a side: " << sideLength;
}

float Square::Area() const
{
	float area = 0;
	area = sideLength * sideLength;
	return area;
}

string Square::GetName2D() const
{
	string name;
	name = "Square";
	return name;
}

/*==== TRIANGLE ====*/

Triangle::Triangle()
{
	height = 0, base = 0;
}

Triangle::Triangle(float _base, float _height)
{
	base = _base;
	height = _height;
}

void Triangle::Scale(float scaleFactor)
{
	base = base * scaleFactor;
	height = height * scaleFactor;
}

void Triangle::Display() const
{
	cout << "The area of the " << GetName2D() << " is : " << Area();
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;
}

float Triangle::Area() const
{
	float area = 0;
	area = ((base * height) * 0.5f);
	return area;
}

string Triangle::GetName2D() const
{
	string name;
	name = "Triangle";
	return name;
}

/*==== CIRCLE ====*/

Circle::Circle()
{
	radius = 0;
}

Circle::Circle(float _radius)
{
	radius = _radius;
}

void Circle::Scale(float scaleFactor)
{
	radius = radius * scaleFactor;
}

void Circle::Display() const
{
	cout << "The area of the " << GetName2D() << " is : " << Area() << endl;
	cout << "Radius: " << radius << endl;
}

float Circle::Area() const
{
	float area = 0;
	float radiusSquare = radius * radius;
	area = PI * radiusSquare;
	return area;
}

string Circle::GetName2D() const
{
	string name = "Circle";
	return name;
}

/*==== 3D SHAPES ====*/

void Shape3D::ShowVolume() const
{
	cout << "The volume of the " << GetName3D() << " is: " << Volume() << endl;
}


bool Shape3D::operator>(const Shape3D& rhs) const
{
	bool greaterThan = false;
	if (this->Volume() > rhs.Volume())
	{
		greaterThan = true;
		return greaterThan;
	}
	else
	{
		return greaterThan;
	}
}


bool Shape3D::operator<(const Shape3D& rhs) const
{
	bool greaterThan = false;
	if (this->Volume() < rhs.Volume())
	{
		greaterThan = true;
		return greaterThan;
	}
	else
	{
		return greaterThan;
	}
}

bool Shape3D::operator==(const Shape3D& rhs) const
{
	bool greaterThan = false;
	if (this->Volume() == rhs.Volume())
	{
		greaterThan = true;
		return greaterThan;
	}
	else
	{
		return greaterThan;
	}
}

/*==== TRIANGULAR PYRAMID ====*/

TriangularPyramid::TriangularPyramid()
{
	base = 0;
	height = 0;
	tall = 0;
}

TriangularPyramid::TriangularPyramid(float _tall, float _base, float _height) : Triangle(_base, _height)
{
	tall = _tall;	
}

void TriangularPyramid::Scale(float scaleFactor)
{
	tall = tall * scaleFactor;
	base = base * scaleFactor;
	height = height * scaleFactor;
}

void TriangularPyramid::Display() const
{
	cout << "The volume of the " << GetName3D() << " is : " << Volume() << endl;
	cout << "The height is: " << tall << endl;
	cout << "The area of the Triangle is : " << Area() << endl;
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;

}

float TriangularPyramid::Volume() const
{
	float volume = 0;
	volume =Triangle::Area() * tall * (1.0f / 3.0f);
	return volume;
}

string TriangularPyramid::GetName3D() const
{
	string name = "TriangularPyramid";
	return name;
}

/*==== CYLINDER ====*/

Cylinder::Cylinder()
{
	Circle::radius = 0;
	tall = 0;
}

Cylinder::Cylinder(float _tall, float _radius) :Circle(_radius)
{
	tall = _tall;
}

void Cylinder::Scale(float scaleFactor)
{
	radius = radius * scaleFactor;
	tall = tall * scaleFactor;
}

void Cylinder::Display() const
{
	cout << "The volume of the " << GetName3D() << " is : " << Volume() << endl;
	cout << "The height is: " << tall << endl;
	cout << "The area of the Circle is : " << Area() << endl;
	cout << "Radius: " << radius << endl;
}

float Cylinder::Volume() const
{
	float volume = 0;
	volume = PI * radius * radius * tall;
	return volume;
}

string Cylinder::GetName3D() const
{
	string name = "Cylinder";
	return name;
}

/*==== SPHERE ====*/

Sphere::Sphere()
{
	
	radius = 0;
}

Sphere::Sphere(float _radius)
{
	radius = _radius;
}

void Sphere::Scale(float scaleFactor)
{
	radius = radius * scaleFactor;
}

void Sphere::Display() const
{
	cout << "The volume of the " << GetName3D() << " is : " << Volume() << endl;
	cout << "The area of the Circle is : " << Area() << endl;
	cout << "Radius: " << radius << endl; 
}

float Sphere::Volume() const
{
	float volume = 0;
	volume = ((radius * radius * radius) * PI * (4.0f / 3.0f));
	return volume;
}

string Sphere::GetName3D() const
{
	string name = "Sphere";
	return name;
}

Shape::~Shape()
{
	// What do I put here? 
}
