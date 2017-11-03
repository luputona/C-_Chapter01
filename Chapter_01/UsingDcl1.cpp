#include<iostream>

using namespace std;

namespace Hybrid
{
	void HybFunc(void)
	{
		cout << "So simple function!" << endl;
		cout << "In namespace Hybrid!" << endl;
	}
}
void main13()
{
	using Hybrid::HybFunc;
	HybFunc();

}