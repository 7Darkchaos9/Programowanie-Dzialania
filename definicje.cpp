#include"Nag³ówek.h"

klasa operator&(const klasa& o) 
{
	return klasa(o.zmienna - 6);
}

klasa operator-(const klasa& o, const klasa& n)
{
	return klasa(o.zmienna - n.zmienna);
}

ostream& operator<<(ostream& str, const klasa& obiekt) 
{
	return str << obiekt.zmienna;
}