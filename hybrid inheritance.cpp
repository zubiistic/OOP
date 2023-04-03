#include <iostream>
using namespace std;
class F {
	
public :
	
	int p;
	F ()
{
		p = 0;
}
    F ( int p )
{
    this -> p = p;
}
void show ()
{
	cout << " H world " << endl;
}
private:
	
   void Show()
   {
   	cout << " H world " << endl;
   }
protected :
	
	void SHow ()
	{
		cout << " H world " << endl;
	}
};

class G {
	
public :
	
	int s;
	G ()
{
		s = 0;
}
    G ( int s )
{
    this -> s = s;
}
void dis ()
{
	cout << " HEY world " << endl;
}
private:
	
   void Dis()
   {
   	cout << " HEY world " << endl;
   }
protected :
	
	void DIS ()
	{
		cout << " HEY world " << endl;
	}
};

class H : public F , public G {
	
public :
	
	int v;
	H ()
{
		v = 0;
}
    H ( int v )
{
    this -> v = v;
}
void mee ()
{
	cout << " HI world " << endl;
}
private:
	
   void Mee()
   {
   	cout << " HI world " << endl;
   }
protected :

	void MEE ()
	{
		cout << " HI world " << endl;
	}
};

class I : public H {
	
public :
	
	int y;
	I ()
{
		y = 0;
}
    I ( int y )
{
    this -> y = y;
}
void you ()
{
	cout << " hello world " << endl;
}
private:
	
   void You()
   {
   	cout << " hello world " << endl;
   }
protected :
	
	void YOU ()
	{
		cout << " hello world " << endl;
	}
};

int main ()
{
   I i;
   G g;
	i.dis();
	return 0;
}
