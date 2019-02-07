//
// Created by Owner on 2019-02-06.
//

#include "animal.hpp"

ostream& operator<<(ostream& os,animal& animal){

        os<<"\n";

    return os;

}
void animal:: move(double const xcor, double const ycor){
    xcord = xcor;
    ycord = ycor;
}
void animal::setalive(bool changelife){
    alive = changelife;
}
void animal::setid(long i){
    id = i;
}
void animal:: sleep(){
    cout<<"zzzzzzzzzzzzzzzzzzzz";
}
void animal:: eat(){
    cout<< "nom nom nom nom nom";
}
void animal:: setage(int newage){
    age = newage;
}
void animal:: setxcord(int xc){
    xcord = xc;
}
void animal::setycord(int yc){
    xcord = yc;
}
double animal:: getxcord(){
    return xcord;
}
double animal:: getycord(){
    return ycord;
}
int animal:: getage(){
    return age;
}
