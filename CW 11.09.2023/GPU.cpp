#include <iostream>

using namespace std;
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"

GPU::GPU()
{
	name = nullptr;
	price = 0;
	memory = 0;
	cout << "GPU Constructor" <<endl;
}
void GPU::input(const char* n, double p, int m)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	memory = m;

}
void GPU::print()
{
	cout << "GPU NAME: " << name << endl;
	cout << "GPU PRICE: " << price << endl;
	cout << "GPU MEMORY: " << memory << endl;
}
GPU::~GPU()
{
	delete[] name;
	cout << "GPU Destructor" << endl;
}
GPU::GPU(const GPU& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	price = b.price;
	memory = b.memory;
	cout << "GPU Copy Constructor" << endl;
}
void GPU::setName(const char* n)
{
	if (name != nullptr)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
char* GPU::getName()
{
	return name;
}
void GPU::setPrice(const double p)
{
	price = p;
}
double GPU::getPrice()
{
	return price;
}
void GPU::setMemory(const int m)
{
	memory = m;
}
int GPU::getMemory()
{
	return memory;
}