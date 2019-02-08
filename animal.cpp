//
// Created by Owner on 2019-02-06.
//

#include <sstream>
#include "animal.hpp"

ostream& operator<<(ostream& os,animal& animal){
    if(!animal.alive ){
        os<<"i am a animal\n I am dead";
    }else{
        os<<"i am a animal\n I am alive";
    }
    return os;

}
ostream& animal::print(ostream& os){
    stringstream ss;
    os<<"i am a animal";
    return os;
}
void animal:: move(double const xcor, double const ycor, double const h){
    xcord = xcor;
    ycord = ycor;
    height = h;
}
void animal::setalive(bool changelife){
    alive = changelife;
}
void animal::setid(long i){
    id = i;
}
void animal:: sleep(){
    cout<<"zzzzzzzzzzzzzzzzzzzz\n";
}
void animal:: eat(){
    cout<< "nom nom nom nom nom\n";
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
void animal::setheight(double h) {
    height = h;
}
double animal::getheight() {
    return height;
}

void animal::hunt(animal* a){


        double animalx =a->getxcord();
        double animaly =a->getycord();
        double animalh =a->getheight();
        double caninex = a->getxcord();
        double caniney = a->getycord();
        double canineh = 1;

        double totalx,totaly, totalh;

        totalx=animalx-caninex;
        totaly=animaly-caniney;
        totalh=animalh-canineh;

        if(abs(totalx)<=1&&abs(totaly)<=1&&abs(totalh)<=1){
            a->setalive(false);
            cout<<"\nCanine hunt was a success\n";
        }else{
            cout<<"\nCanine hunt Failed\n";
        }


    }

