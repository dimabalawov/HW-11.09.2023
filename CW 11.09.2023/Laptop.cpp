#include <iostream>

using namespace std;
#include "Laptop.h"
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"

Laptop::Laptop()
{
	count++;
	price = 0;
	name = nullptr;
	color = nullptr;
}
Laptop::Laptop(const char* laptopn, const char* color, double laptopp, const char* ssdn, double ssdp, int ssdm, const char* namec, double cpup, int cores, const char* gpun, double gpup, int gpum, const char* ramn, double ramp, int ramm):price(laptopp)
{
	count++;
	name = new char[strlen(laptopn) + 1];
	strcpy_s(name, strlen(laptopn) + 1, laptopn);
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
	price = laptopp;
	ssd.input(ssdn, ssdp, ssdm);
	ram.input(ramn, ramp, ramm);
	gpu.input(gpun, gpup, gpum);
	cpu.input(namec, cpup, cores);
}
void Laptop::print()
{
	cout << "LAPTOP NAME: " << name << endl;
	cout << "LAPTOP PRICE: " << price << endl;
	cout << "LAPTOP COLOR: " << color << endl;
	ssd.print();
	cpu.print();
	gpu.print();
	ram.print();
}
Laptop::~Laptop()
{
	count--;
	delete[] name;
	delete[] color;
	cout << "Laptop Destructor" << endl;
}
Laptop::Laptop(const Laptop& b)
{
	count++;
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	price = b.price;
	color = new char[strlen(b.color) + 1];
	strcpy_s(color, strlen(b.color) + 1, b.color);
	cout << "Laptop Copy Constructor" << endl;
}
void Laptop::setPrice(double p)
{
	price = p;
}
double Laptop::getPrice()
{
	return price;
}
void Laptop::setName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
char* Laptop::getName()
{
	return name;
}
void Laptop::setColor(const char* c)
{
	if (color != nullptr)
		delete[] color;
	name = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}
char* Laptop::getColor()
{
	return color;
}
