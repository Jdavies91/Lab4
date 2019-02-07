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
getheight(){
    return height;
}
setheight(double h){
    height = h;
}