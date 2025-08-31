#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"

using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Flying Squirrel", 1758);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   delete animal1;

   AnimalsInZoo zoo1;
   Animal animal4("American Bullfrog", 1802);
   zoo1 = AnimalsInZoo(animal4);
   zoo1.display();
}
