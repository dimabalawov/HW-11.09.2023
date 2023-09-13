#include <iostream>

using namespace std;
#include "Laptop.h"
#include "RAM.h"
#include "GPU.h"
#include "CPU.h"
#include "SSD.h"
unsigned int Laptop::count = 0;

int main()
{
	Laptop a("ASUS", "RED", 1230, "ACURA SSD", 200, 512, "INTREL I7", 450, 16, "NVIDIA 1080ti", 670, 8, "KINGSTON", 120, 16);
	a.print();
}
