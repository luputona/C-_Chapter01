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
	cout << "BestCom�� ������ �Լ�" << endl;
	PrettyFunc();				//���� �̸�����
	ProgComImpl::SimpleFunc();	//�ٸ� �̸�����
}
void BestComImpl::PrettyFunc()
{
	cout << "So Pretty!!" << endl;
}
void ProgComImpl::SimpleFunc()
{
	cout << "ProgCom�� ������ �Լ�"<<endl;
}