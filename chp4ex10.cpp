#include<iostream>
#include<conio.h>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};
int main()
{

    float decpounds;
    float decfrac;
    sterling s1;


        cout<<"Enter a money amount in new-style decimal pounds: ";
        cin >>decpounds;
        s1.pounds = static_cast<int>(decpounds);
        decfrac = 240*(decpounds-s1.pounds);
        s1.shillings = (static_cast<int>(decfrac))%12;                  //Ignore fracions in pence.
        decfrac = static_cast<int>((decfrac-s1.shillings)/12);          //Ignore fracions in pence.
        cout<<"Equivalent in old notation = \x9c"<<s1.pounds<<"."<<decfrac<<"."<<s1.shillings<<endl;

}
