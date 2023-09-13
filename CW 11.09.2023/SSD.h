#pragma once
class SSD
{
private:
	char* name;
	double price;
	int memory;
public:
	SSD();
	void input(const char* n, double price, int memory);
	void print();
	~SSD();
	SSD(const SSD& b);
	void setName(const char* n);
	char* getName();
	void setPrice(const double p);
	double getPrice();
	void setMemory(const int m);
	int getMemory();
};

