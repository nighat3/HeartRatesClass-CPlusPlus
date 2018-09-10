//
// Created by Nighat Ansari (na295) on 9/4/18.
// For this assignment, we were tasked with creating a class, HeartRates with a constructor,
// fields, and basic methods. We were asked to split the class into a header and source
// file to make the program more organized. The header file defines all the variables and
// methods the source file implements. Main.cpp then prompts the user to enter in name and
// birthdate, creates an instance of the HeartRates class, and returns name, age, maximum
// heart rate, and a target heart rate range.
//
// I learned how the components of a basic c++ program work and how classes help unique
// instances be defined by similar attributes and methods. I know how to create and use
// header and source files to make the program more structured and easy to navigate. Using
// the debugger, getting user input, and displaying output are also easier to do now.
//



#include <iostream>
#include <random>
#include <chrono>
#include "HeartRates.h"
using std::cin;
using std::cout;
using std::endl;


int main() {
    string input_fname;
    string input_lname;
    string birth_month;
    int birth_day;
    int birth_year;

    //User-input
    cout << "Please enter your first name: "<< endl;
    cin >> input_fname;

    cout << "Please enter your last name: "<< endl;
    cin >> input_lname;

    cout << "Please enter your birth month: "<< endl;
    cin >> birth_month;

    cout << "Please enter your birth day: "<< endl;
    cin >> birth_day;

    cout << "Please enter your birth year: "<< endl;
    cin >> birth_year;
    cout << " " << endl;

    //creating an instance of HeartRates and setting attributes
    HeartRates hr1;
    hr1.setName(input_fname + " " + input_lname);
    hr1.setBirthMonth(birth_month);
    hr1.setBirthYear(birth_year);
    hr1.setBirthDate(birth_day);

    //print results
    cout << "Heart Rate Information" << endl;
    cout << "Name: ";
    cout << hr1.getName()<< endl;
    cout << "Age: ";
    cout << hr1.age(birth_year)<< endl;
    cout << "Maximum Heart Rate: ";
    cout << hr1.maxHeartRate(birth_year)<< endl;
    cout << "Target Heart Rate Range: ";
    hr1.rateRange(birth_year);



    return 0;
}