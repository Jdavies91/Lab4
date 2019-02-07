#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"
int main() {
    animal *a1, *a2,a3;

    a1 = new animal(2,3,4);
    a2 = new bird(2,3,45,4);
    a3 = new canine(3,42,2);

    a1->eat();
    cout << "\n";
    a2->eat();




    return 0;
}