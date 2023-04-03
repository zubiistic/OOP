#include<iostream>
using namespace std;

class A {
	
public :
	int a;
	A ()
{
		a = 0;
}
    A ( int a )
{
    this -> a = a;
}
void ADD ()
{
	cout << " a " << endl;
	cin >> b;
}
private:
	
   int b;
   void HEL()
   {
   	cout << " b " << endl;
   	cin >> b;
   }
protected :
	
	int c;
	void MEE ()
	{
		cout << " c " << endl;
		cin >> c;
	}
};

class B : public A {
	
public :
	int d;
	B ()
{
		d = 0;
}
    B ( int d )
{
    this -> d = d;	
}
void Add ()
{
	cout << " d " << endl;
	cin >> d;
}
private:
	
   int e;
   void Hel()
   {
   	cout << " e " << endl;
   	cin >> e;
   }
protected :
	
	int f;
	void Mee ()
	{
		cout << " f " << endl;
		cin >> f;
	}
};

int main ()
{
	int ADD;
B b;
b.ADD();
	return 0;
}
