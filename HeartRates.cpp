//
// Created by Nighat Ansari (na295) on 9/4/18.
//



#include <iostream>
#include "HeartRates.h"
#include <tuple>
using std::cout;
using std::get;

HeartRates::HeartRates() {

    name = "";
    birthMonth = "";
    birthDate = 0;
    birthYear = 0;

}

HeartRates::HeartRates(string name, string bm, int bd, int by) {
    this ->name = name;
    this ->birthMonth = bm;
    this ->birthDate = bd;
    this-> birthYear = by;
}

//Getters
string HeartRates::getName() {
    return name;
}

int HeartRates::getBirthDate() {
    return birthDate;
}


string HeartRates::getBirthMonth() {
    return birthMonth;
}

int HeartRates::getBirthYear() {
    return birthYear;
}

//Setters
void HeartRates::setName(string nm) {
    this -> name = nm;
}

void HeartRates::setBirthDate(int date) {
    this -> birthDate = date;
}

void HeartRates::setBirthMonth(string mon) {
    this -> birthMonth = mon;

}

void HeartRates::setBirthYear(int year) {
    this->birthYear = year;
}

//Methods
int HeartRates::age(int birthYear){
    return 2018 - birthYear;
}

int HeartRates::maxHeartRate(int birthYear) {
    return 220 - age(birthYear);
}

std::tuple<int, int> HeartRates::rateRange(int birthYear) {
    std::tuple <int, int> t1;

    t1 = std::make_tuple( 0.5 * maxHeartRate(birthYear), 0.85 * maxHeartRate(birthYear));
    cout << "(" << get<0>(t1) << ", " << get<1>(t1) << ")";
}

