#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {};
AnimalsInZoo::AnimalsInZoo(Animal animal) : numAnimals(1), animal(animal) {};
void AnimalsInZoo::display() {
	cout << numAnimals << endl;
	if(numAnimals == 1) {
		animal.display();
	};
};
