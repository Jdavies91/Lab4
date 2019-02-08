//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

class canine : public animal{
private:

    bool alive;
    long id;
public:
    bool isalive = true;
    int intdefualt=0;
    double dbldefault=0;




    canine(int age, double xcord,double ycord):  animal(age,xcord,ycord){};


        canine(const canine &copycanine){
            xcord = copycanine.xcord;
            ycord = copycanine.ycord;
            height= copycanine.height;
            age = copycanine.age;
            alive = copycanine.alive;
         }
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
