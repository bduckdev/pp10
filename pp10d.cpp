/* File pp10d.cpp
 * Author: Brennan Duck
 * Prints a list of pets to stdout in sorted order */
#include <ctime>
#include <iomanip>
#include <iostream>

// Declare pet struct
struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};
// Declare prototypes
void printPets(Pet userPet[], int len);
void sortPets(Pet userPet[], int len);
bool isSorted(Pet userPet[], int len);
void shuffle(Pet userPet[], int len);

int main() {
  // Declare pets and seed rand
  srand(time(0));
  Pet pets[5] = {{"Fido", 7, true},
                 {"Puppy", 1, false},
                 {
                     "Kitty",
                     1,
                     false,
                 },
                 {"Brutus", 11, true},
                 {"Bilbo", 15, true}};
  // Call functions
  sortPets(pets, 5);
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
  // Print value for each pet
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
/* sortPets(): sorts userPets[]
 * Params:
 * 1. Pet userPets[]: List of pets stored in an array
 * 2. int len: Length of userPets[]
 * Pre-condition: userPets exists and has a length of len.
 * Post-condition: userPets is sorted in alphabetical order. */
void sortPets(Pet userPets[], int len) {
  // Shuffle userPets until it is sorted alphabetically
  while (!isSorted(userPets, len)) {
    shuffle(userPets, len);
  }
}
/* isSorted: Checks if userPets[] is sorted.
 * Params:
 * 1. Pet userPets[]: List of pets stored in an array
 * 2. int len: Length of userPets[]
 * Pre-condition: userPets exists and has a length of len.
 * Returns: a bool which indicates if userPets[] is sorted */
bool isSorted(Pet userPets[], int len) {
  // Iterate over userPets[]
  for (int i = 1; i < len; ++i) {
    // Check if the item to the left of userPets[i] is sorted
    if (userPets[i].name < userPets[i - 1].name)
      return false;
  }
  return true;
};

/* shuffle: Randomly shuffles the order of userPets[]
 * Params:
 * 1. Pet userPets[]: List of pets stored in an array
 * 2. int len: Length of userPets[]
 * Pre-condition: userPets exists and has a length of len.
 * Post-condition: userPets[] is shuffled. */
void shuffle(Pet userPets[], int len) {
  // Iterate over userPets[]
  for (int i = 0; i < len; ++i) {
    // Swap userPets[i] at random
    int idx = rand() % len;
    std::swap(userPets[i], userPets[idx]);
  }
}
