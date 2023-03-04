#include<iostream>
using namespace std;
class Duration
{
	public:
		int days;
		int hours;
		int minutes;
		int seconds;
	Duration()
	{
		days = 0;
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	Duration(int days,int hours,int minutes,int seconds)
	{
		this -> days = days;
		this -> hours = hours;
		this -> minutes = minutes;
		this -> seconds = seconds;
	}
	Duration(int seconds)
	{
    minutes = seconds / 60;
    seconds %= 60;
    hours = minutes / 60;
    minutes %= 60;
    days = hours / 24;
    hours %= 24;
	}
	void show() {
	cout << "The equivalent time is " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;
	}
};

int main ()
{
  int seconds, minutes, hours, days;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    
    Duration dur(seconds);
    dur.show();
  
return 0;		
}
