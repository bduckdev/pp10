/* File: pp10c.cpp
 * Author: Brennan Duck
 * This program prints an array of structs which contain pet data
 */
#include <iomanip>
#include <iostream>

// Declare pet struct
struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};
void printPets(Pet userPet[], int len);

int main() {
  // Create array of pet data
  Pet pets[5] = {{"Fido", 7, true},
                 {"Puppy", 1, false},
                 {
                     "Kitty",
                     1,
                     false,
                 },
                 {"Brutus", 11, true},
                 {"Bilbo", 15, true}};
  // call printPets()
  printPets(pets, 5);

  return 0;
}

/* printPets(): prints userPets to the console
 * Params:
 * 1. Pet userPets[]: List of pets stored in an array
 * 2. int len: Length of userPets[]
 * Pre-condition: userPets exists and has a length of len.
 * Post-condition: userPets[] is printed.
 */
void printPets(Pet userPets[], int len) {
  // Print header
  std::cout << std::setw(10) << std::left << "Name" << std::setw(5) << "Age"
            << "Neutered" << '\n';
  for (int i = 0; i < 23; i++) {
    std::cout << '-';
  }
  std::cout << '\n';
  // Print data for each pet
  for (int i = 0; i < len; i++) {
    std::cout << std::setw(10) << std::left << userPets[i].name << std::setw(5)
              << userPets[i].age;
    if (userPets[i].isNeutered) {
      std::cout << "Yes\n";
    } else {
      std::cout << "No\n";
    }
  }
}
