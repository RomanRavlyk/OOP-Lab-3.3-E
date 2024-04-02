#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
	Object Object;
	Liquid liquid;
	Solution sol(liquid, 0);
	
	cin >> sol;
	cout << sol;

	cout << "ObjectCount: " << Object::Count() << endl;
	cout << "LiquidCount: " << Solution::Count() << endl;
	cout << "SolutionCount: " << Solution::Count() << endl;

	return 0;
}