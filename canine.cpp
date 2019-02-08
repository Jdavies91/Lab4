//
// Created by Owner on 2019-02-06.
//

#include "canine.hpp"

void canine::sleep(){
    cout<<"\nruffzzzzzzzzzzz\n";
}
void canine::eat(){
    cout<<"yumyumyum\n";
}
void canine::hunt(animal* a){

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
ostream& operator<<(ostream& os,canine& canine){

    canine.print(os);

    return os;

}
void canine::move(double const  x,double const  y,double const  h){

    animal::move(x,y,0);
}
ostream& canine::print(ostream& os){
    os<<"i am a canine";
    return os;
}
