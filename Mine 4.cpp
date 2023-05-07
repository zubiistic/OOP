#include <iostream>
using namespace std;
class A
{
	int a;
public:
	A()
	{
		cout << " A's Constructor is called " << endl;
	}
};
class B
{
	static A a;
public:
	B()
	{
		cout << " A's Constructor is called " << endl;
	}
	static A get()
	{
		return a;
	}
};
A B::a;
int main(int argc,char const*argv[])
{
	B b;
	A a1 = b.get();
	A a2 = b.get();
	A a3 = b.get();
}
