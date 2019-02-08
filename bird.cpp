//
// Created by Owner on 2019-02-06.
//
#include "animal.hpp"
#include "bird.hpp"

void bird::move(double const x,double const y, double const h) {
    ycord =y;
    xcord = x;
    height = h;
}

double bird::getheight(){
    return height;
}
void bird::setheight(double h){
    height = h;
}
void bird::sleep(){
    cout<< "chirpzzzzzzzzz\n";
}
void bird::eat(){
    cout<< "\npeckpeckpeck\n";
}
ostream& operator<<(ostream& os,bird& bird){

        bird.print(os);

    return os;

}

ostream& bird::print(ostream& os){
    string life = "dead";
    if(!alive ){
        os<<"i am a bird\n I am dead";
    }else{
        os<<"i am a bird\n I am alive";
    }

    return os;
}


