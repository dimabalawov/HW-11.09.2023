#pragma once

class RAM
{
	char* name;
	double price;
	int memory;
public:
	RAM();
	void input(const char* n, double p, int m);
	void print();
	~RAM();
	RAM(const RAM& b);
	void setName(const char* n);
	char* getName();
    void setPrice(const double p);
	double getPrice();
	void setMemory(const int m);
	int getMemory();
};

