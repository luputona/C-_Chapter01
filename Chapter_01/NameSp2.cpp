#include<iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc2(void);
}

namespace ProgComImpl
{
	void SimpleFunc2(void);
}

void main10()
{
	BestComImpl::SimpleFunc2();
	ProgComImpl::SimpleFunc2();
}

void BestComImpl::SimpleFunc2(void)
{
	cout << "BestCom이 정의한 함수" << endl;
}
void ProgComImpl::SimpleFunc2(void)
{
	cout << "ProgCom이 정의한 함수" << endl;
}