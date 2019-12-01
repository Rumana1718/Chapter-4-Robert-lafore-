#include<iostream>

#include<iomanip>
using namespace std;

struct employee
{
    int number;
    float compensation;
};
int main()

{


    employee  e[3];
    int i;


    for(i=0; i<3; i++)
    {
        cout<<"Enter the number of employee "<<i+1<<" : ";
        cin>>e[i].number;
        cout<<"Enter the compensation of employee number "<<i+1<<" : ";
        cin>>e[i].compensation;
    }
    cout<<"Employee number"<<"Employee compensation\n";
    for(i=0; i<3; i++)
        cout<<setw(15)<<e[i].number<<setw(24)<<e[i].compensation<<endl;



}
