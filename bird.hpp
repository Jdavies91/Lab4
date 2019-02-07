//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP
#include "animal.hpp"

class bird : public animal {
private:
    double height;
    char *birdptr;
public:
    int height=0;
    bird(){
            height = 0;
            *birdptr = nullptr;
    }
    bird(int height):animal(age,xcord,ycord){

        id++;
        alive = true;
        count++
        age = age;
        xcord = xcord;
        ycord = ycord;
        height = height;

    }
    virtual ~bird(){
            if(bird != nullptr){
                    delete[] bird;
                    bird = nullptr;
            }
    }
    void sleep();
    void eat();
    getheight();
    setheight(double h);
    friend ostream& operator<<(ostream& os,animal& animal);

};


#endif //LAB4_BIRD_HPP
