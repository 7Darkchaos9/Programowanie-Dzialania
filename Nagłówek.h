#pragma once
#include<iostream>
using namespace std;

class klasa 
{
	int zmienna;
public:
	klasa() :zmienna(0) {}
	klasa(int zmienna) :zmienna(zmienna) {}

	klasa operator!() 
	{
		return klasa(zmienna + 6);
	}

	klasa operator + (const klasa& n) 
	{
		return klasa(zmienna + n.zmienna);
	}

	friend klasa operator&(const klasa&); 

	friend klasa operator-(const klasa&, const klasa&); 

	friend ostream& operator<<(ostream&, const klasa&); 

};
