# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: zoo

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
zoo: zoo.o Animal.o AnimalsInZoo.o
	g++ zoo.o Animal.o AnimalsInZoo.o -o zoo

# Specify how the object files should be created from source files
zoo.o: zoo.cpp
	g++ -Wall -Wextra -c zoo.cpp
Animal.o: Animal.cpp
	g++ -Wall -Wextra -c Animal.cpp
AnimalsInZoo.o: AnimalsInZoo.cpp
	g++ -Wall -Wextra -c AnimalsInZoo.cpp

clean:
	rm -f *.o zoo
