//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>
using namespace std;
static long count = 0;
class animal {

private:
    int age;
    long id;
    bool alive;
    double xcord;
    double ycord;
    animal *animalptr;
public:

    animal(){

        animalptr= nullptr;
        id=count;
        count++;
        alive = true;
        age = 0;
        xcord = 0;
        ycord = 0;
    }

    animal(int age, double xcord,double ycord){
        animalptr= nullptr;
        id = count;
        alive = true;
        count++;
        age = age;
        xcord = xcord;
        ycord = ycord;

    }
    animal(animal &copyanimal){
        animalptr = new animal;
        *animalptr= *&copyanimal;
    }
\
    ~animal(void){
        if(animalptr != nullptr){
            delete[] animalptr;
            animalptr = nullptr;

        }
        return;
    }
    friend ostream& operator<<(ostream& os,animal& animal);
    animal(const animal &copyanimal);

    virtual void sleep();
    virtual void eat();
    virtual void move(double const xcor, double const ycor);

    void setalive(bool changelife);
    friend ostream& operator<<(ostream& os,animal& animal);
    void setage(int newage);
    void setxcord(int xc);
    void setycord(int yc);
    double getxcord();
    double getycord();
    int getage();
    void setid(long i);


    bool isabird();

};


#endif //LAB4_ANIMAL_HPP
