// write a program to print table of any given number?

#include <iostream>
using namespace std;

// Driver code
int main()

{
	int n;
	cout<< "Enter a number : ";
	cin>> n;
	
	for (int i = 1; i <= 20; ++i)
		cout << n << " * " << i << " = " << n * i << endl;
	return 0;
}

