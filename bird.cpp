//
// Created by Jonathan Davies on 2019-02-06.
// This class implements all my bird functions
//
#include "animal.hpp"
#include "bird.hpp"

//this allows the bird to move cordinates
void bird::move(double const x,double const y, double const h) {
    ycord =y;
    xcord = x;
    height = h;
}

//this get the bird heigh
double bird::getheight(){
    return height;
}

// this sets the bird height as a double
void bird::setheight(double h){
    height = h;
}

//void prints out to the screen the bird sleep
void bird::sleep(){
    cout << "chirpzzzzzzzzz\n";
}

//void prints out to the screen the bird eat
void bird::eat(){
    cout << "\npeckpeckpeck\n";
}

//overrides the insercetion operator and calls the print method
ostream& operator<<(ostream& os, bird& bird){

    bird.print(os);

    return os;

}

//Print message calls what the animal it is and if its alive or dead.
ostream& bird::print(ostream& os){

    if (alive) {
        os<<"i am a bird\n I am dead";
    }else{
        os<<"i am a bird\n I am alive";
    }

    return os;
}


