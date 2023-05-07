#include <iostream>
using namespace std;

class Base {
private:
    int a;
protected:
    int b;
public:
    void fun() 
	{
        cout << "this works";
    }
};

class Child : private Base {
public:
    void fun1()
//	{
//        cout << "this works";
//    }
};

int main() {
    Child c1;
    c1.fun1();
}
