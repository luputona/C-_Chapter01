#include<iostream>

using namespace std;

void main3()
{
	int nVal1, nVal2;
	int nResult = 0;

	cout << "두 개의 숫자 입력 : ";
	cin >> nVal1 >> nVal2;

	if (nVal1 < nVal2)
	{
		for (int i = nVal1 + 1; i < nVal2; i++)
		{
			nResult += i;
		}
	}
	else
	{
		for (int i = nVal2 + 1; i < nVal1; i++)
		{
			nResult += i;
		}
	}

	cout << "두 수 사이의 정수 합 : " << nResult << endl;
}