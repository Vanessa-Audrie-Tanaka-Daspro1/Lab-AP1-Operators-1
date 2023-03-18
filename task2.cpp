/*Suppose you entered a 6 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
For example, if you entered number is 569678, then the displayed number should be 781890.*/

#include <iostream>
using namespace std;

int main ()
{
    int number,a,b,c,d,e,f,g,h,i,j,k,l;
    cout<<"Enter 6 digits of number: ";
    cin>>number;

    a=number%10; //Taking the last digit
    b=(number/10)%10; //Taking the fifth digit
    c=(number/100)%10; //taking the fourth digit
    d=(number/1000)%10; //Taking the third digit
    e=(number/10000)%10; //Taking the second digit
    f=(number/100000)%10; //Taking the first digit

    g=f+2; //Adding the first digit with 2
    h=e+2; //Adding the second digit with 2
    i=d+2; //Adding the third digit with 2
    j=c+2; //Adding the fourth digit with 2
    k=b+2; //Adding the fifth digit with 2
    l=a+2; //Adding the sixth digit with 2

    //incase the digit is ten or more
    if(g>=10)
        {g=g%10;}
    if(h>=10)
        {h=h%10;}
    if(i>=10)
        {i=i%10;}
    if(j>=10)
        {j=j%10;}
    if(k>=10)
        {k=k%10;}
    if(l>=10)
        {l=l%10;}

    cout<<"Result after adding 2 to each number: "<<g<<h<<i<<j<<k<<l;

}