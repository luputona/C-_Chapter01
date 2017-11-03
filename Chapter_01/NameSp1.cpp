#include<iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc1(void)
	{
		cout << "BestCom이 정의한 함수" << endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc1(void)
	{
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

void main9()
{
	BestComImpl::SimpleFunc1();
	ProgComImpl::SimpleFunc1();
}