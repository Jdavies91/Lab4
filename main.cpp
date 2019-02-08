#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    animal *a, *b, *c;
    const double moveforkill= 1;
    a = new animal(2,3,4);
    b = new bird(3,2,5,3);
    c = new canine(3,4,3);






   // animal a2(b2);

    cout<< "Animal\n";
    cout<<*a;
    cout<<"When Animal  is sleeping:\n ";
    a->sleep();
    cout<<"\nWhen Animal is eating:\n ";
    a->eat();
    cout<<"age: "<<a->getage();

    cout<<"\n--------------\n";
    cout<< "\nBird\n";
    cout<<(bird&)*b;
    cout<<"\nWhen Bird is sleeping:\n";
    b->sleep();
    cout<<"When Bird is eating: ";
    b->eat();
    cout<<"Bird Height: ";
    b->getheight();
    cout<<endl;
    cout<<"age:"<<b->getage();

    cout<<"\n--------------\n";
    cout<< "\nCanine\n";
    cout<<(canine&)*c;

    cout<<"\nWhen Canine is sleeping: ";
    c->sleep();
    cout<<"When Canine is eating:\n ";
    c->eat();
    cout<<"Age: "<<c->getage();

    cout<<"\n--------------\n\n";
    cout<<"\nBird current State\nY:"<<b->getycord()<<"\nX:"<<b->getxcord()<<"\nHeight:"<<b->getheight();
    cout<<"\nBird has moved";
    b->move(moveforkill,moveforkill,moveforkill);
    cout<<"\n\nBird new State\nY:"<<b->getycord()<<"\nX:"<<b->getxcord()<<"\nHeight:"<<b->getheight();

    cout<<"\n--------------\n\n";
    cout<<"\nCanine current State\nY:"<<c->getycord()<<"\nX:"<<c->getxcord()<<"\nHeight:"<<c->getheight();
    cout<<"\nCanine has moved";
    c->move(moveforkill,moveforkill,moveforkill);
    cout<<"\n\nCanine new State\nY:"<<c->getycord()<<"\nX:"<<c->getxcord()<<"\nHeight:"<<c->getheight();
    c->hunt(b);
    cout<<(bird&)*b;


    return 0;
}