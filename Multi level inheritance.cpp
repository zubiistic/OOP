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
	cout << " p " << endl;
	cin >> p;
}
private:
	
   int q;
   void Show()
   {
   	cout << " q " << endl;
   	cin >> q;
   }
protected :
	
	int r;
	void SHow ()
	{
		cout << " r " << endl;
		cin >> r;
	}
};

class G : public F {
	
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
	cout << " s " << endl;
	cin >> s;
}
private:
	
   int t;
   void Dis()
   {
   	cout << " t " << endl;
   	cin >> t;
   }
protected :
	
	int u;
	void DIS ()
	{
		cout << " u " << endl;
		cin >> u;
	}
};

class H : public G {
	
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
void dis ()
{
	cout << " v " << endl;
	cin >> v;
}
private:
	
   int w;
   void Dis()
   {
   	cout << " w " << endl;
   	cin >> w;
   }
protected :
	
	int x;
	void DIS ()
	{
		cout << " x " << endl;
		cin >> x;
	}
};
int main ()
{
	H h;
	h.dis();
	return 0;
}
