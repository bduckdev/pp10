/* File: pp10b.cpp
 * Author: Brennan Duck
 * This program asks the user for information about a pet, then prints it out.*/
#include <iostream>

// Declare struct
struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};
void getPet(Pet &userPet);
void printPet(Pet userPet);

int main() {
  // Instantiate struct and call getPet() + printPet()
  struct Pet userPet;

  getPet(userPet);
  printPet(userPet);

  return 0;
}
/* getPet():
 * Params:
 * 1. Pet &userPet: object to store pet data
 * Pre-condition: userPet exists.
 * Post-condition: userPet contains the data entered by the user.
 */
void getPet(Pet &userPet) {
  // Declare temporary var to store the raw char entered by the user.
  char isNeutered;
  // Get info from user
  std::cout << "Enter Pet name: ";
  std::cin >> userPet.name;
  std::cout << "Enter Pet age: ";
  std::cin >> userPet.age;
  std::cout << "Has Pet been neutered (y/n): ";
  std::cin >> isNeutered;
  // set userPet.isNeutered based on the char inputted by the user.
  if (isNeutered == 'Y' || isNeutered == 'y') {
    userPet.isNeutered = true;
  } else {
    userPet.isNeutered = false;
  }
}
/* printPet(): Prints data from userPet
 * Params:
 * 1. Pet userPet: obj containing info to be outputted
 * Pre-condition: userPet contains data
 * Post-condition: The data from userPet has been printed to the console.
 */
void printPet(Pet userPet) {
  // output data from userPet
  std::cout << userPet.name << ' ' << userPet.age;
  // if userPet.isNeutered is false, add " not" to stdout
  if (!userPet.isNeutered) {
    std::cout << " not";
  }
  std::cout << " neutered\n";
};
