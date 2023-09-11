#pragma once


class Laptop
{
private:
	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;
	double price;
	char* name;
	char* color;
public:
	static unsigned int count;
	Laptop();

};

