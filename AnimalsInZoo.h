#include <iostream>
#include <stdlib.h>
#include <string>
#include "Animal.h"
using namespace std;

class AnimalsInZoo {
	public:
		AnimalsInZoo();
		AnimalsInZoo(Animal animal);

		void display();
	private:
		int numAnimals;
		Animal animal;
};
