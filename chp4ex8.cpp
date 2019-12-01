#include<iostream>
#include<conio.h>
using namespace std;

struct fraction
{
    int numerator;
    int denominator;
};
int main()
{

    fraction equ[2];
    char operation;


    cout<<"Enter first  fraction: ";
    cin >>equ[0].numerator>>operation>>equ[0].denominator;
    cout<<"Enter second fraction: ";
    cin >>equ[1].numerator>>operation>>equ[1].denominator;
    cout<<"Sum = "<<(equ[0].numerator*equ[1].denominator+equ[0].denominator*equ[1].numerator)
        <<operation<<(equ[0].denominator*equ[1].denominator)<<endl;

}
