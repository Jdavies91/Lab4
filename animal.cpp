//
// Created by Owner on 2019-02-06.
//

#include "animal.hpp"

animal::ostream& operator<<(ostream& os,animal& animal){
    for(int x = 0; x < animal.xcord;x++){
        for(int y = 0; y<animal.ycord;y++){
            os<<setw(4)<<left<<animal.c.getValue(r,c);

        }
        os<<"\n";
    }
    return os;

}
animal::virtual move(double const xcor, double const ycor){
    xcord = xcor;
    ycord = ycor;
}
animal::bool setalive(bool changelife){
    alive = changelife;
}
vanimal::virtual void sleep(){
    cout<<"zzzzzzzzzzzzzzzzzzzz";
}
animal::virtual void eat(){
    cout<< "nom nom nom nom nom"
}
animal::void setage(int newage){
    age = newage;
}
animal::void setxcord(int xc){
    xcord = xc;
}
animal::void setycord(int yc){
    xcord = yc;
}
animal::double getxcord(){
    return xcord;
}
animal::double getycord(){
    return ycord;
}
animal::int getage(){
    return age;
}