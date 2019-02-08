//
// Created by Jonathan Davies on 2019-02-06.
//This class implements my constructors and member varibles;

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

// Calls the parent animal class and implements in the child "Bird"
class bird : public animal {

public:

    //default constructor
    bird() : animal() {

        height = 0;

    }

    //overloads constructor and adds height to the parent class varible
    bird(int age, double xcord, double ycord, double h): animal(age, xcord, ycord){

        height = h;

    }

    // copy constructer for bird
    bird(const bird &copybird){
        xcord = copybird.xcord;
        ycord = copybird.ycord;
        height= copybird.height;
        age = copybird.age;
        alive = copybird.alive;
    }

    // destructor for bird
    virtual ~bird(){
    }
    std::ostream& print(ostream& os);

    //  my void  function
    void sleep();
    void eat();
    void setheight(double h);
    void move(double const x, double const y, const double h);

    //return height as double
    double getheight();

    //my friend operator for friends.
    friend ostream& operator<<(ostream& os, bird& bird);

};


#endif //LAB4_BIRD_HPP
