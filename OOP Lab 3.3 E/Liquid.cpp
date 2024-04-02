#include <iostream>
#include <string>
#include <sstream>
#include "Liquid.h"
using namespace std;



void Liquid::setDen(int value) {
	density = value;
}

void Liquid::setName(string value) {
	name = value;
}

Liquid& Liquid::operator ++() {
	density++;
	return *this;
}

Liquid& Liquid::operator --() {
	density--;
	return *this;
}

Liquid Liquid::operator ++(int)
{
	Liquid t(*this);
	density++;
	return t;
}

Liquid Liquid::operator --(int)
{
	Liquid t(*this);
	density--;
	return t;
}

ostream& operator << (ostream& out, const Liquid& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Liquid& r)
{
	cout << " Enter liqud name = "; in >> r.name; cout << endl;
	cout << " Enter liqud density = "; in >> r.density; cout << endl;
	return in;
}

Liquid::operator string() const {
	cout << "Your liqud name: " << name << endl;
	cout << "Your liquid density: " << density << endl;
	return "";
}

Liquid& Liquid::operator=(const Liquid& other) {
	name = other.name;
	density = other.density;
	return *this;
}