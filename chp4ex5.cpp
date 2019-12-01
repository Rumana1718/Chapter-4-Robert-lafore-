#include<iostream>
#include<iomanip>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};
int main()
{

    date  x;
    char c;

    cout<<"Enter the date : ";
    cin >>x.day>>c>>x.month>>c>>x.year;
    cout<<"The date is    : ";
    cout<<x.day<<c<<x.month<<c<<x.year;
    return 0;

}
