#include<iostream>
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
		sapid = std.sapid;
		name = std.name;
		semester = std.semester;
		cgpa = std.cgpa;
		gender = std.gender;
	}
	~students ()
	{
		cout<<"Distructer of students is running";
	}
};

int main ()
{
	students s1;
	s1.sapid = 46728;
	s1.name = "ZOHAIB MUGHAL";
	s1.semester = 2;
	s1.cgpa = 2.40;
	s1.gender = 'M';
	cout<<s1.sapid<<endl;
	cout<<s1.name<<endl;
	cout<<s1.semester<<endl;
	cout<<s1.cgpa<<endl;
	cout<<s1.gender;
return 0;
}
