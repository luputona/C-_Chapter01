#include<iostream>

using namespace std;

void MyFunc(void)
{
	cout << "MyFunc() called" << endl;
}
void MyFunc(char c)
{
	cout << "MyFunc(char c) called " << endl;
}
void MyFunc(int a, int b)
{
	cout << "MyFunc(int a, int b) called" << endl;
}

void main5()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

}
