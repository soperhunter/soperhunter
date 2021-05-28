#include <iostream>
using namespace std;

int main()
{
    cout << "******************************************************************** \n";
    cout << "************Welcome to my first program in C++!*********************";
    cout << "\nPlease enter a large number of seconds to be converted to Hours, Minutes, and Seconds.\n"; //Required Introduction
    cout << "******************************************************************** \n";
    int seconds{};
    int minutes{}; //Declaring Variables
    int hours{};

    cout << "Type an amount of Seconds: "; //Asking for input and storing it
    cin >> seconds;

    while (seconds > 60) {
        minutes = minutes + 1; //Converting seconds to minutes
        seconds = seconds - 60;
    }

    while (minutes > 60) {
        hours = hours + 1; //Converting minutes to hours
        minutes = minutes - 60;
    }

    cout << "\nThe Number of Hour(s) in the number: " << hours;
    cout << "\nThe Number of Minute(s) in the number: " << minutes; //Final output
    cout << "\nThe Number of Second(s) in the number: " << seconds;
    cout << "\n";
       
}