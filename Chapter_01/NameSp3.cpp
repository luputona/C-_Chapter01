#include<iostream>

using namespace std;

namespace BestComImpl
{
	void SimpleFunc(void);
}
namespace BestComImpl
{
	void PrettyFunc(void);
}
namespace ProgComImpl
{
	void SimpleFunc(void);
}

void main11()
{
	BestComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc()
{
	cout << "BestCom이 정의한 함수" << endl;
	PrettyFunc();				//동일 이름공간
	ProgComImpl::SimpleFunc();	//다른 이름공간
}
void BestComImpl::PrettyFunc()
{
	cout << "So Pretty!!" << endl;
}
void ProgComImpl::SimpleFunc()
{
	cout << "ProgCom이 정의한 함수"<<endl;
}