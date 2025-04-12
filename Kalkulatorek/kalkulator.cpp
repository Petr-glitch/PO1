#include <iostream>
#include "kalkulator.h"
#include "mainwindow.h"
#include <cmath>
using namespace std;

double cal::add(double a)
{
    mem += a;
	return mem;
}
double cal::sub(double a)
{
    mem -= a;
	return mem;
}
double cal::mlt(double a)
{
    mem = mem * a;
	return mem;
}
double cal::div(double a)
{
        mem /= a;
		return mem;
}
double cal::mod(double a) {
    return mem - (int)(mem / a) * a;
}

double cal::pier()
{
    if(mem >= 0) {
        return sqrt(mem);
    }
    return mem;
}

void cal::reset()
{
    mem = 0;
}


void cal::setmem(double a)
{
    mem = a;
}
double cal::retmem()
{
    return mem;
}
