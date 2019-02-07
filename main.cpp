#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
int main() {
    animal *a1, *a2;

    a1 = new animal(2,3,4);
    a2 = new bird(2,3,45,4);
    a1->eat();
    cout << "\n";
    a2->eat();




    return 0;
}