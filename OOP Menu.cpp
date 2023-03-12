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

int Main_Menu();
    void Add_student() 
    {
    int sapid;
	string name;
	int semester;
	float cgpa;
	char gender;
	
    system ("cls");
	string line;

	cout << "\n\t\t\t\t ADD New Student ";
	
	cout << "\n Student Sapid  : ";
	cin >> sapid;
	cout << "\n Student Name  : ";
	cin.ignore();
	getline(cin, name);
	cout << "\n Semester  : ";
	cin >> semester;
	cout << "\n Student cgpa  : ";
	cin >> cgpa;
	cout << "\n Student Gender  : ";
	cin >> gender;
	char c;
	if(c == 'm')
     gender = false;
	else
	  gender = true;
	students std (  sapid,  name,  semester,  cgpa,  gender );
	ofstream file;
	file.open("zohaib.txt");
	
	file << sapid << " " << endl;
	file << name << " "<< endl;
	file << semester << " "<< endl;
	file << cgpa << " "<< endl;
	file << gender << " "<< endl;
	
	file.close();
    }
void display_records()
{
	system ("cls");
	ifstream file;
	file.open("zohaib.txt");
	
	int sapid;
	string name;
	int semester;
	float cgpa;
	char gender;
	
	cout << "\n\t\t\t\t Show Student Record "<< endl;
	
	file >> sapid;
	file >> name;
	file >> semester;
	file >> cgpa;
	file >> gender;
	
	cout << " Student SapID : " << sapid <<endl;
	cout << " Student Name : " << name <<endl;
	cout << " Semester : " << semester <<endl;
	cout << " Student CGPA : " << cgpa <<endl;
	cout << " Student Gender : " << gender <<endl;
	
	file >> sapid;
	file >> name;
	file >> semester;
	file >> cgpa;
	file >> gender;
	
	file.close();
}
void end ()
{
	cout<< endl<<endl;
	cout <<"THANK YOU...."<<endl;
}

int Main_Menu()
{
	system("cls");  

	cout << "\n\n\t MAIN MENU "<<endl;
    cout << "---------------------------------------";
    cout<< endl<<endl;
	cout << "\n ||    1. Add New Student             ||"<<endl;
	cout << "\n ||    2. Show All Records            ||"<<endl;
	cout << "\n ||    3. EXIT                         ||"<<endl<<endl;
	cout << "---------------------------------------";
    cout<< endl<<endl;
	cout << "\n Enter Choice : \t";
	char x;
	int option;
    cin>>option; 
    switch (option)
    {
    case 1 : 
       Add_student();
       break;
    case 2 : 
        display_records();
		break;
     case 3 :
	    end();
    }
}

int main ()
{
   Main_Menu();

return 0;
}
