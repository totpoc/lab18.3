#include "class.h"
#include <iostream>

using namespace std;

MONEY MONEY::operator+(int temp)
{
	return MONEY(_rub + temp, _penny);
}
MONEY MONEY::operator+(double temp)
{
	return MONEY(_rub, _penny + temp);
}
MONEY MONEY::operator-(MONEY temp)
{
	return MONEY(_rub - temp._rub, _penny - temp._penny);
}
void MONEY::operator-=(MONEY temp)
{
	_rub = _rub - temp._rub;
	_penny = _penny - temp._penny;
}
void MONEY::operator +=(int temp)
{
	_rub = _rub + temp;
}
void MONEY::operator +=(double temp)
{
	_penny = _penny + temp;
}
bool operator== (const MONEY& c1, const MONEY& c2)
{
	return (c1._rub   == c2._rub &&
			c1._penny == c2._penny);
}
bool operator!= (const MONEY& c1, const MONEY& c2)
{
	return !(c1 == c2);
}
istream& operator>>(istream& in, MONEY& temp)
{
	cout << "¬ведите количество рублей: "; cin >> temp._rub;
	cout << "¬ведите количество копеек: "; cin >> temp._penny;
	return in;
}
ostream& operator<<(ostream& out, const MONEY& temp)
{
	return (out << temp._rub << "," << temp._penny);
}


