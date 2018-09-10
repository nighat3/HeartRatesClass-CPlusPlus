//
// Created by Nighat Ansari on 9/4/18.
//

#ifndef ASSIGNMENT2_HEARTRATES_H
#define ASSIGNMENT2_HEARTRATES_H

#include <string>
#include <random>
#include <tuple>

using std::string;

class HeartRates
{
public:
    HeartRates();
    HeartRates(string, string, int, int);

    string getName();
    void setName(string name);

    string getBirthMonth();
    void setBirthMonth(string mon);

    int getBirthDate();
    void setBirthDate(int date);

    int getBirthYear();
    void setBirthYear(int year);

    int age(int);
    int maxHeartRate(int);
    std::tuple<int, int> rateRange(int);




private:
    //variables
    string name;
    string birthMonth;
    int birthDate;
    int birthYear;





};


#endif //ASSIGNMENT2_HEARTRATES_H