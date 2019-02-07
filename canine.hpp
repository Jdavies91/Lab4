//
// Created by Owner on 2019-02-06.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

class canine : public animal{
private:
    canine *canineptr;
    bool alive;
    long id;
public:
    canine(int age, double xcord,double ycord):animal(age, xcord,ycord){
        canineptr = nullptr;
        setid(count++);

        setycord(ycord);
        setxcord(xcord);
        setalive(alive);
        }
        canine(){
        canineptr = nullptr;
        }

        canine(const canine &copycanine){
           canineptr = new canine;

            *canineptr = copycanine;
         }
        virtual ~canine() {
        if (canineptr != nullptr) {
            delete[] canineptr;
            canineptr = nullptr;
        }
    }
        void move();
        void sleep();
        void eat();

        friend ostream& operator<<(ostream& os,canine& canine);

        string hunt(animal& a);


};


#endif //LAB4_CANINE_HPP
