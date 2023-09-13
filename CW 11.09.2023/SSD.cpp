#include <iostream>

using namespace std;
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"

SSD::SSD()
{
	name = nullptr;
	price = 0;
	memory = 0;
	cout << "SSD Constructor" << endl;
}
void SSD::input(const char* n, double p, int m)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	memory = m;
	
}
void SSD::print()
{
	cout << "SSD NAME: " << name << endl;
	cout << "SSD PRICE: " << price << endl;
	cout << "SSD MEMORY: " << memory << endl;
}
SSD::~SSD()
{
	delete[] name;
	cout << "SSD Destructor" << endl;
}
SSD::SSD(const SSD& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	price = b.price;
	memory = b.memory;
	cout << "SSD Copy Constructor" << endl;
}
void SSD::setName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
char* SSD::getName()
{
	return name;
}
void SSD::setPrice(const double p)
{
	price = p;
}
double SSD::getPrice()
{
	return price;
}
void SSD::setMemory(const int m)
{
	memory = m;
}
int SSD::getMemory()
{
	return memory;
}