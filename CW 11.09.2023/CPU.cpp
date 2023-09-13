#include <iostream>

using namespace std;
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"

CPU::CPU()
{
	name = nullptr;
	price = 0;
	cores = 0;
	cout << "CPU Constructor" << endl;
}
void CPU::input(const char* n, double p, int c)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	cores = c;

}
void CPU::print()
{
	cout << "CPU NAME: " << name << endl;
	cout << "CPU PRICE: " << price << endl;
	cout << "CPU CORES: " << cores << endl;
}
CPU::~CPU()
{
	delete[] name;
	cout << "CPU Destructor" << endl;
}
CPU::CPU(const CPU& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	price = b.price;
	cores = b.cores;
	cout << "CPU Copy Constructor" << endl;
}
void CPU::setName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
char* CPU::getName()
{
	return name;
}
void CPU::setPrice(const double p)
{
	price = p;
}
double CPU::getPrice()
{
	return price;
}
void CPU::setCores(const int c)
{
	cores =c;
}
int CPU::getCores()
{
	return cores;
}