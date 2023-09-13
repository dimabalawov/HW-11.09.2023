#pragma once
class CPU
{
private:
	char* name;
	double price;
	int cores;
public:
	CPU();
	void input(const char* n, double p, int c);
	void print();
	~CPU();
	CPU(const CPU& b);
	void setName(const char* n);
	char* getName();
	void setPrice(const double p);
	double getPrice();
	void setCores(const int c);
	int getCores();
};

