#include <iostream>

using namespace std;
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"


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
	static int count;
	Laptop();
	Laptop(const char* laptopn, const char* color, double laptopp, const char* ssdn, double ssdp, int ssdm, const char* namec, double cpup, int cores, const char* gpun, double gpup, int gpum, const char* ramn, double ramp, int ramm);
	void print();
	~Laptop();
	Laptop(const Laptop& b);
	void setPrice(double p);
	double getPrice();
	void setName(const char* n);
	char* getName();
	void setColor(const char* n);
	char* getColor();

};

