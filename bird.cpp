//
// Created by Owner on 2019-02-06.
//
#include "animal.hpp"
#include "bird.hpp"

void bird::move(double const h,double const y, double const x)  {
    setxcord(x);
    setycord(y);
    height = h;
}

double bird::getheight(){
    return height;
}
void bird::setheight(double h){
    height = h;
}
void bird::sleep(){
    cout<< "chirpzzzzzzzzz";
}
void bird::eat(){
    cout<< "peckpeckpeck";
}
ostream& operator<<(ostream& os,bird& bird){

        os<<"\n";

    return os;

}


