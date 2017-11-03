#include<iostream>

using namespace std;

int Adder1(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

void main6()
{
	cout << Adder1() << endl;
	cout << Adder1(5) << endl;
	cout << Adder1(3, 5) << endl;
}

