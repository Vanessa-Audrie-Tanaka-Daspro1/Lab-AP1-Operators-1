/*What would be result:
Write a program to enter a 4 digit number which is 1233 from keyboard. 
Add 8 to the number and then divide it by 3. 
Now, the modulus of that number is taken with 5 
and then multiply the resultant value by 5. 
Display the final result.*/

#include <iostream>
using namespace std;

int main ()
{
    int number;
    cout<<"Enter 4 digit number: ";
    cin>>number;

    number=number+8; //add 8 to the number
    number=number/3; //divide it by 3
    number=number%5; //modulus of the number is taken by 5
    number=number*5; //multiply the number by 5

    cout<<"The final result is "<<number;

    return 0;

}