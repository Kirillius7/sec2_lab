#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	int m,n, L;
	met1: 
	cout << "Enter your n = ";
	cin >> n;
	m > 1;
	for (L=1; m <=n; L++)
		m*=L;
	cout << L << endl;
	goto met1;
	return 0; 
}
