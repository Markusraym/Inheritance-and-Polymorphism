#pragma once
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#define PI 3.14159f
using namespace std;

class Shape
{
public:
   
	virtual void Scale(float scaleFactor) = 0;
	virtual void Display() const = 0;
	virtual ~Shape() = 0;
};

class Shape2D : virtual public Shape
{
public:
	virtual float Area() const = 0;
	void ShowArea() const;
	virtual string GetName2D() const = 0;
	bool operator>(const Shape2D& rhs) const;
	bool operator<(const Shape2D& rhs) const;
	bool operator==(const Shape2D& rhs) const;
};

class Shape3D : virtual public Shape
{
public:
	virtual float Volume() const = 0;
	void ShowVolume() const;
	virtual string GetName3D() const = 0;
	bool operator>(const Shape3D& rhs) const;
	bool operator<(const Shape3D& rhs) const;
	bool operator==(const Shape3D& rhs) const;
};

/*=== 2D SHAPES ====*/

class Square : virtual public Shape2D
{
public:
	float sideLength = 0;
	Square();
	Square(float sidelength);
	void Scale(float scaleFactor);
	void Display() const;
	float Area() const;
	string GetName2D() const;
};

class Triangle : virtual public Shape2D
{
public:
	float height = 0;
	float base = 0;
	Triangle();
	Triangle(float base, float height);
	void Scale(float scaleFactor);
	void Display() const;
	float Area() const;
	string GetName2D() const;
};

class Circle : virtual public Shape2D
{
public:
	float radius = 0;
	Circle();
	Circle(float radius);
	void Scale(float scaleFactor);
	void Display() const;
	float Area() const;
	string GetName2D() const;
};

/*==== 3D SHAPES ====*/

class TriangularPyramid : virtual public Shape3D, virtual private Triangle
{
public:
	float tall = 0;
	TriangularPyramid();
	TriangularPyramid(float tall, float base, float height);
	void Scale(float scaleFactor);
	void Display() const;
	float Volume() const;
	string GetName3D() const;
};

class Cylinder : virtual public Shape3D, virtual private Circle
{
public: 
	float tall = 0;
	Cylinder();
	Cylinder(float tall, float radius);
	void Scale(float scaleFactor);
	void Display() const;
	float Volume() const;
	string GetName3D() const;
};

class Sphere : virtual public Shape3D, virtual private Circle
{
public:
	Sphere();
	Sphere(float radius);
	void Scale(float scaleFactor);
	void Display() const;
	float Volume() const;
	string GetName3D() const;
};