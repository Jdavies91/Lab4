//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird : public animal {
private:
    double height;
    bird *birdptr;
    bool alive;

public:

    bird(){
            height = 0;
            birdptr = nullptr;
    }
    bird(int h, int age, int xcord, int ycord):animal(age,xcord,ycord){

        setid(count++);

        setalive(alive);

        setage(age);
        setalive(alive);
        setxcord(xcord);
        setycord(ycord);
        height = h;

    }
    bird(const bird &copybird){
        birdptr = new bird;
        *birdptr = copybird;
    }
    virtual ~bird(){
            if(birdptr != nullptr){
                    delete[] birdptr;
                    birdptr = nullptr;
            }
    }
    void sleep();
    void eat();
    double getheight();
    void setheight(double h);
    void move(double const height, double const y, const double x);
    friend ostream& operator<<(ostream& os,bird& bird);

};


#endif //LAB4_BIRD_HPP
