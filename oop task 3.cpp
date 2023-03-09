#include<iostream>
#include <fstream>
using namespace std;
class students 
    {
	public:
		
	int sapid;
	string name;
	int semester;
	float cgpa;
	char gender;

    students()
    {
    	sapid = -1;
    	name = " ";
    	semester = 0;
    	cgpa = 0.0;
    	gender = ' ';
	}
	students ( int sapid, string name, int semester, float cgpa, char gender )
	{
		cout<<"Parametric constructor is called\n";
		this -> sapid = sapid; 
		this -> name = name;
		this -> semester = semester;
		this -> cgpa = cgpa;
		this -> gender = gender;
	}
	students ( int sapid, int semester )
	{
		this -> sapid = sapid;
		this -> semester = semester;
	}
	students ( students & std )
	{
		cout<<"Copy Constructor is called\n";
		sapid = std.sapid;
		name = std.name;
		semester = std.semester;
		cgpa = std.cgpa;
		gender = std.gender;
	}
	~students ()
	{
		cout<<"Distructer is running";
	}
	void show ()
	{
	cout<<"Sap ID :"<<sapid<<endl;
	cout<<"Name :"<<name<<endl;
	cout<<"Semester :"<<semester<<endl;
	cout<<"CGPA :"<<cgpa<<endl;
	cout<<"Gender :"<<gender;
	if(gender)
		cout<<"Female";
	else
		cout<<"Male";
		cout<<"\n";
	}
};

int main ()
{
	int sapid;
	string name;
	int semester;
	float cgpa;
	char gender;
//	students s1;
	string line;
	ofstream fout;
	
	fout.open("zohaib.txt");
	
	while (fout) {

	getline(cin, line);

	if (line == ".")
	break;
	
	fout << line << endl;
	}
	
	fout.close();
	
	ifstream zaeb;
	zaeb.open("zohaib.txt");
	
	while (zaeb>>sapid) {
	zaeb>>name;
	zaeb>>semester;
	zaeb>>cgpa;
	char c;
	zaeb>>c;
	
	if(c == 'm')
	  gender = false;
	else
	  gender = true;
			
	students std (int sapid,string name, int semester, float cgpa, char gender);
		std.show();
		cout<<"\n\n";
	}

	zaeb.close();
//	s1.sapid = 46728;
//	s1.name = "ZOHAIB MUGHAL";
//	s1.semester = 2;
//	s1.cgpa = 2.40;
//	s1.gender = 'M';
//	cout<<s1.sapid<<endl;
//	cout<<s1.name<<endl;
//	cout<<s1.semester<<endl;
//	cout<<s1.cgpa<<endl;
//	cout<<s1.gender;

return 0;
}
