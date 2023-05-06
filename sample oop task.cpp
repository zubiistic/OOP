#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name,city;
	int str;
	string oop;
	
	cout<<"NAME : ";
	getline(cin,name);
	cout<<"CITY : ";
    cin>>city;
	cout<<"STREET NO : ";
	cin>>str;

	ofstream fout;
	fout.open("zohaib.txt");
	
	fout<<name<<"\t";
	fout<<city<<"\t";
	fout<<str<<"\t";

	while (fout) {

	getline(cin, oop);

	if (oop == ".")
	break;
	
	fout << oop << endl;
	}

	fout.close();
	
	ifstream fin;
	fin.open("zohaib.txt");
	
	fin.close();
	
	return 0;
}
