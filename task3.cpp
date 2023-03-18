/*Write a program to calculate the sum of the digits of a 4-digit number which is entered from keyboard. E.g.-
    INPUT : 1234        OUTPUT : 10*/

#include<iostream>
using namespace std;

int main()
{
    int number,a,b,c,d,e;
    cout<<"Enter 4 digits of number: ";
    cin>>number;

    a=number%10; //Taking the last digit
    b=(number/10)%10; //Taking the third digit
    c=(number/100)%10; //taking the second digit
    d=(number/1000)%10; //Taking the first digit

    e=a+b+c+d; //Adding all the numbers

    cout<<"The sum of the 4-digit number is "<<e;
}