#include<iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc1(void)
	{
		cout << "BestCom�� ������ �Լ�" << endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc1(void)
	{
		cout << "ProgCom�� ������ �Լ�" << endl;
	}
}

void main9()
{
	BestComImpl::SimpleFunc1();
	ProgComImpl::SimpleFunc1();
}