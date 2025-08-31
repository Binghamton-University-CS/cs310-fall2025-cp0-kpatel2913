#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Animal {
	public:
		Animal(string speciesName, unsigned int discoveryYear);
		Animal();

		void display();
	private:
		string species;
		unsigned int year_discovered;

};
