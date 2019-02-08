//
// Created by Jonathan Davies on 2019-02-06.
// Intialized the canine class

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

//canine class is a child of fthe animal class
class canine : public animal{
// sets the public class varibles
public:
    // constructor overides the cordinates
    canine(int age, double xcord,double ycord):  animal(age,xcord,ycord){};

    //copy constructor
    canine(const canine &copycanine) {
        xcord = copycanine.xcord;
        ycord = copycanine.ycord;
        height = copycanine.height;
        age = copycanine.age;
        alive = copycanine.alive;
    }

    //desturctor
    virtual ~canine() {

    }
    void move(double const x, double const y, double const h)override;

    ostream& print(std::ostream& out);
    void sleep();
    void eat();

        friend ostream& operator<<(ostream& os,canine& canine);
        void hunt(animal* a);


};


#endif //LAB4_CANINE_HPP
