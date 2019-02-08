//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>
using namespace std;
static long count = 0;
class animal {

protected:
    int age;
    long id;
    bool alive;
    double xcord;
    double ycord;
    double  height;

public:

    animal(){


        id=count;
        count++;
        alive = true;
        age = 0;
        xcord = 0;
        ycord = 0;
        height=0;
    }

    animal(int a, double x,double y){

        id = count++;
        alive = true;

        age = a;
        xcord = x;
        ycord = y;
        height=0;

    }
    animal(animal &copyanimal){
        xcord = copyanimal.xcord;
        ycord = copyanimal.ycord;
        height= copyanimal.height;
        age = copyanimal.age;
        alive = copyanimal.alive;
    }
\
    ~animal(void){

    }

    animal(const animal &copyanimal);
    virtual std::ostream& print(ostream& os);
    friend ostream& operator<<(ostream& os,animal& animal);

    virtual void sleep();
    virtual void eat();
    virtual void move(double const xcor, double const ycor,double height);

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
    void hunt(animal* a);
    bool isabird();

};


#endif //LAB4_ANIMAL_HPP
