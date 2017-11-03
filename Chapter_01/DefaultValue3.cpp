#include<iostream>

using namespace std;

int BoxnVolum(int lenght, int width = 1, int height = 1);

void main7()
{
	cout << "[3, 3, 3] : " << BoxnVolum(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxnVolum(5, 5) << endl;
	cout << "[7, D, D] : " << BoxnVolum(7) << endl;
	//cout << "[3, 3, 3] : " << BoxnVolum(3, 3, 3) << endl;
}

int BoxnVolum(int lenght, int width, int height)
{
	return lenght * width * height;
}