#include<iostream>
#include<conio.h>
using namespace std;

struct time
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{


    time t1;
    char c;


    cout<<"Enter a time value in hours, minutes, and seconds : ";
    cin >>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
    cout<<"The total number of seconds is: "<<t1.hours*3600 + t1.minutes*60 + t1.seconds;

}
