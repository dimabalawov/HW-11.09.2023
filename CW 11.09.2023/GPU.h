#pragma once
class GPU
{
private:
	char* name;
	double price;
	int memory;
public:
	GPU();
	void input(const char* n, double p, int m);
	void print();
	~GPU();
	GPU(const GPU& b);
	void setName(const char* n);
	char* getName();
	void setPrice(const double p);
	double getPrice();
	void setMemory(const int m);
	int getMemory();
};

