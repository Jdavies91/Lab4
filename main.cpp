//
// Created by jonathan davies on 2019-02-06.
//this is the main file.

#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

int main() {
    //intalized animal pointer
    double const two = 2;
    double const three = 3;
    double const four = 4;
    double const five = 5;
    double const zero = 0;
    animal *a, *b, *c;
    const double moveforkill= 1;
    // sets animal vales
    a = new animal(two, three, four);
    b = new bird(three, two, five, three);
    c = new canine(three, four, three);



    //calls needed functions for animal
    cout << "Animal\n";
    cout << *a;
    cout << "When Animal  is sleeping:\n ";
    a->sleep();
    cout << "\nWhen Animal is eating:\n ";
    a->eat();
    cout << "age: " << a->getage();
    //calls needed function for bird
    cout << "\n--------------\n";
    cout << "\nBird\n";
    cout << (bird&)*b;
    cout << "\nWhen Bird is sleeping:\n";
    b->sleep();
    cout << "When Bird is eating: ";
    b->eat();
    cout << "Bird Height: ";
    b->getheight();
    cout << endl;
    cout << "age:" << b->getage();
    //gets and sets value for canine
    cout << "\n--------------\n";
    cout << "\nCanine\n";
    cout << (canine&)*c;
    cout << "\nWhen Canine is sleeping: ";
    c->sleep();
    cout << "When Canine is eating:\n ";
    c->eat();
    cout << "Age: " << c->getage();
    // does all the currents states of the animal
    cout << "\n--------------\n\n";
    cout << "\nBird current State\nY:" << b->getycord() << "\nX:" << b->getxcord() << "\nHeight:" << b->getheight();
    cout << "\nBird has moved";
    b->move(moveforkill, moveforkill, zero);
    cout << "\n\nBird new State\nY:" << b->getycord() << "\nX:" << b->getxcord() << "\nHeight:" << b->getheight();

    cout << "\n--------------\n\n";
    cout << "\nCanine current State\nY:" << c->getycord() << "\nX:" << c->getxcord() << "\nHeight:" << c->getheight();
    cout << "\nCanine has moved";
    c->move(moveforkill, moveforkill, zero);
    cout << "\n\nCanine new State\nY:" << c->getycord() << "\nX:" << c->getxcord() << "\nHeight:" << c->getheight();
    ((canine *) (c))->hunt(b);
    cout << (bird&)*b;


    delete a;
    delete b;
    delete c;

    return 0;
}