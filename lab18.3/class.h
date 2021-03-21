#pragma once
#include <iostream>

using namespace std;

class MONEY
{
	long _rub;
	int _penny;

public:
	MONEY()
	{
		_rub   = 0;
		_penny = 0;
	}
	MONEY(long rub, int penny)
	{
		_rub   = rub;
		_penny = penny;
	}
	MONEY(const MONEY& temp)
	{
		_rub   = temp._rub;
		_penny = temp._penny;
	}

	~MONEY() {}

	void setRub(long rub)		{ _rub = rub; }
	void setPenny(int penny)	{ _penny = penny; }

	long getRub()	{ return _rub; }
	int getPenny()  { return _penny; }

	MONEY  operator+   (int temp);
	MONEY  operator+   (double temp);
	MONEY  operator-   (MONEY temp);
	void   operator-=  (MONEY temp);
	void   operator+=  (int temp);
	void   operator+=  (double temp);

	friend bool     operator==  (const MONEY& c1, const MONEY& c2);
	friend bool     operator!=  (const MONEY& c1, const MONEY& c2);
	friend istream& operator>>  (istream& in, MONEY& temp); 
	friend ostream& operator<<  (ostream& out, const MONEY& temo);
};
