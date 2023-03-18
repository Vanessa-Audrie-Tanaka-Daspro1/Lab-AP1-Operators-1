/*Write a function that takes in a time in seconds (as an integer) and returns a string in the format "HH:MM:SS". 
For example, if the input is 3661, the output should be "01:01:01".

Here are some additional requirements and constraints:
1. The input time will be a non-negative integer.
2. The output should always have two digits for hours, minutes, and seconds (for example, "01" instead of "1").*/

#include <iostream>
#include <iomanip> //So that setw and setfill can be used
using namespace std;

int main ()
{
    int time,hours,minutes,seconds;
    cout<<"Input time in seconds (not allowed to be negative): ";
    cin>>time;


    hours=time/3600; //to calculate hours, converting seconds to hour is to by divide it by 3600
    minutes=time/60-(hours*60); //to calculate minutes, we minus the hours because we already counted the hour before
    seconds=time/1-(hours*3600)-(minutes*60); /*to calculate seconds, we minus the hours and minutes because 
    we already counted the hours and minutes before*/

    to_string(hours); //converting hours to string
    to_string(minutes); //converting minutes to string
    to_string(seconds); //converting seconds to string

    /*setw is used to set the width of the field assigned for the output
      setfill is used to fill the other number if the hour/minute/second is only 1 number*/
    cout<<"Time in HH:MM:SS format = "<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<minutes<<":"<<setw(2)<<setfill('0')<<seconds;
}