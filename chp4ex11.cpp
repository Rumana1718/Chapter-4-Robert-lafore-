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
    time t1, t2, t3;
    char c;
    long tmp;

    cout<<"In [hh:mm:ss] format;\n";
    cout<<"Enter first time value : ";
    cin >>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
    cout<<"Enter second time value: ";
    cin >>t2.hours>>c>>t2.minutes>>c>>t2.seconds;
    tmp=t1.hours*3600+t1.minutes*60+t1.seconds+t2.hours*3600+t2.minutes*60+t2.seconds;
    t3.seconds=tmp%60;
    t3.minutes=((tmp-t3.seconds)%3600)/60;
    t3.hours=tmp/3600;

    if(t3.seconds>59)
    {
        t3.seconds-=59;
        t3.minutes++;
    }
    if(t3.minutes>59)
    {
        t3.minutes-=59;
        t3.hours++;
    }

    cout<<"The result is: "<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds;

}
