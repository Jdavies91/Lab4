//
// Created by Owner on 2019-02-06.
//
#include "animal.hpp"
#include "bird.hpp"

animal::virtual  int bird::move(double const xcor, double const ycor, double const height) override {
    xcord = xcor;
    ycord = ycor;
    height = height;
}
bird::bird(const animal &copybird){
    birdptr = new int;
    *birdptr = *copybird.ptr;
}
bird::getheight(){
    return height;
}
bird::setheight(double h){
    height = h;
}
bird::sleep(){
    cout<< "chirpzzzzzzzzz"
}
bird::eat(){
    cout<< "peckpeckpeck"
}
bird::ostream& operator<<(ostream& os,bird& bird){
    for(int x = 0; x < bird.xcord;x++){
        for(int y = 0; y<bird.ycord;y++){
            os<<setw(4)<<left<<bird.move(r,c,height);

        }
        os<<"\n";
    }
    return os;

}
