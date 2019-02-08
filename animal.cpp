//
// Created by Jon on 2019-02-06.
//

#include <sstream>
#include "animal.hpp"

// intialized a override operator.
ostream& operator<<(ostream& os, animal& animal){
    if(!animal.alive ){
        os << "i am a animal\n I am dead";
    }else{
        os << "i am a animal\n I am alive";
    }
    return os;

}

// intialized print and returns ostream of ouput
ostream& animal::print(ostream& os){
    stringstream ss;
    os << "i am a animal";
    return os;
}

// moves the animals cordinates
void animal:: move(double const xcor, double const ycor, double const h){
    xcord = xcor;
    ycord = ycor;
    height = h;
}

// sets animal alive or dead
void animal::setalive(bool changelife){

    alive = changelife;
}

// sets id
void animal::setid(long i){
    id = i;
}

// prints out animal sleep
void animal:: sleep(){
    cout << "zzzzzzzzzzzzzzzzzzzz\n";
}

// prints out eat
void animal:: eat(){
    cout << "nom nom nom nom nom\n";
}

// set the age to new age
void animal:: setage(int newage){
    age = newage;
}

// set the xcord
void animal:: setxcord(int xc){
    xcord = xc;
}

//sets the y cord
void animal::setycord(int yc){
    xcord = yc;
}

//returns a double get xcord
double animal:: getxcord(){
    return xcord;
}

// returns a double ycord
double animal:: getycord(){
    return ycord;
}

// returns the int age
int animal:: getage(){
    return age;
}

// sets the height of the animal
void animal::setheight(double h) {
    height = h;
}

// get the height of the animal
double animal::getheight() {
    return height;
}



