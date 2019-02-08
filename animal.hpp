//
// Created by jonathan davies on 2019-02-06.
//this is the hpp file for animal class that instialized the animals

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>
using namespace std;
static long count = 0;

//parent class of bird and canine
class animal {
// initialized protected varibles
protected:
    int age;
    long id;
    bool alive;
    double xcord;
    double ycord;
    double  height;
// intialized public varibles
public:
    double const two = 2;
    double const three = 3;
    double const four = 4;
    double const five = 5;
    double const zero = 0;

    //animal default constructor
    animal(){


        id=count;
        count++;
        alive = true;
        age = zero;
        xcord = zero;
        ycord = zero;
        height = zero;
    }

    // animal override destructor
    animal(int a, double x, double y){

        id = count++;
        alive = true;

        age = a;
        xcord = x;
        ycord = y;
        height = zero;

    }

    // copy constructor
    animal(animal &copyanimal){
        xcord = copyanimal.xcord;
        ycord = copyanimal.ycord;
        height= copyanimal.height;
        age = copyanimal.age;
        alive = copyanimal.alive;
    }

    //destrouctor
    ~animal(void){

    }

    //inialized the function
    animal(const animal &copyanimal);

    //virtual function for polymorphism in different classes
    virtual std::ostream& print(ostream& os);


    virtual void sleep();

    virtual void eat();

    virtual void move(double const xcor, double const ycor, double height);

    friend ostream &operator<<(ostream &os, animal &animal);

    void setalive(bool changelife);

    bool setalive();

    void setage(int newage);

    void setxcord(int xc);

    void setycord(int yc);

    double getxcord();

    double getheight();

    double getycord();

    int getage();

    void setid(long i);

    void setheight(double height);

    bool isabird();

};


#endif //LAB4_ANIMAL_HPP
