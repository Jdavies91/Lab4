//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird : public animal {
private:


    bool alive=true;

public:
    bool  booldefault = true;
    int  intdefualt=0;
    double  dbldefault=0;


    bird( int age, double xcord, double ycord,double h):  animal(age,xcord,ycord){

        height = h;

    }
    bird(const bird &copybird){
        xcord = copybird.xcord;
        ycord = copybird.ycord;
        height= copybird.height;
        age = copybird.age;
        alive = copybird.alive;
    }
    virtual ~bird(){
    }
    std::ostream& print(ostream& os);
    void sleep();
    void eat();
    double getheight();
    void setheight(double h);
    void move(double const x, double const y, const double h);
    friend ostream& operator<<(ostream& os,bird& bird);

};


#endif //LAB4_BIRD_HPP
