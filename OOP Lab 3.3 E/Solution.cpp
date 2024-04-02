#include <iostream>
#include <string>
#include <sstream>
#include "Solution.h"

using namespace std;


Solution& Solution::operator ++() {
	amount++;
	return *this;
}

Solution& Solution::operator --() {
	amount--;
	return *this;
}

Solution Solution::operator ++(int)
{
	Solution t(*this);
	amount++;
	return t;
}

Solution Solution::operator --(int)
{
	Solution t(*this);
	amount--;
	return t;
}

ostream& operator << (ostream& out, const Solution& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Solution& r)
{
	string x;
	int y;
	cout << "Enter liquid name: ";  in >> x; cout << endl;
	r.setName(x);
	cout << "Enter liquid density: ";  in >> y; cout << endl;
	r.setDen(y);
	cout << " Enter amount = "; in >> r.amount; cout << endl;
	return in;
}

Solution::operator string() const {
	stringstream ss;
	ss << "Your name: " << getName() << endl;
	ss << "Your density: " << getDensity() << endl;
	ss << "Your amount: " << amount << endl;
	return ss.str();
}

Solution& Solution::operator=(const Solution& other) {
	string y = other.getName();
	int x = other.getDensity();
	setName(y);
	setDen(x);
	amount = other.amount;
	return *this;
}