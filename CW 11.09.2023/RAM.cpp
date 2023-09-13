#include <iostream>

using namespace std;
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"


RAM::RAM()
{
	name = nullptr;
	price = 0;
	memory = 0;
	cout << "RAM Constructor" << endl;
}
void RAM::input(const char* n, double p, int m)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	memory = m;

}
void RAM::print()
{
	cout << "RAM NAME: " << name << endl;
	cout << "RAM PRICE: " << price << endl;
	cout << "RAM MEMORY: " << memory << endl;
}
RAM::~RAM()
{
	delete[] name;
	cout << "RAM Destructor" << endl;
}
RAM::RAM(const RAM& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	price = b.price;
	memory = b.memory;
	cout << "RAM Copy Constructor" << endl;
}
void RAM::setName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
char* RAM::getName()
{
	return name;
}
void RAM::setPrice(const double p)
{
	price = p;
}
double RAM::getPrice()
{
	return price;
}
void RAM::setMemory(const int m)
{
	memory = m;
}
int RAM::getMemory()
{
	return memory;
}