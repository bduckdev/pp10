/* File: pp10a.cpp
 * Author: Brennan Duck
 * This program asks the user for information about a pet, then prints it out.*/
#include <iostream>

// Declare struct type
struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};

int main() {
  /* Instantiate struct and declare temp variable to store input for
   * Pet.isNeutered */
  struct Pet userPet;
  char isNeutered;
  // Get info from user
  std::cout << "Enter pet name: ";
  std::cin >> userPet.name;
  std::cout << "Enter pet age: ";
  std::cin >> userPet.age;
  std::cout << "Has pet been neutered (y/n): ";
  std::cin >> isNeutered;
  // Check what char the user inputted and set isNeutered accordingly
  if (isNeutered == 'Y' || isNeutered == 'y') {
    userPet.isNeutered = true;
  } else {
    userPet.isNeutered = false;
  }

  // Print output
  std::cout << userPet.name << " " << userPet.age << " ";
  if (!userPet.isNeutered) {
    std::cout << "not ";
  }
  std::cout << "neutered\n";

  return 0;
}
