#include <iostream>

struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};
void getPet(Pet &userPet);
void printPet(Pet userPet);

int main() {
  struct Pet userPet;

  getPet(userPet);
  printPet(userPet);

  return 0;
}

void getPet(Pet &userPet) {
  char isNeutered;
  std::cout << "Enter Pet name: ";
  std::cin >> userPet.name;
  std::cout << "Enter Pet age: ";
  std::cin >> userPet.age;
  std::cout << "Has Pet been neutered (y/n): ";
  std::cin >> isNeutered;
  if (isNeutered == 'Y' || isNeutered == 'y') {
    userPet.isNeutered = true;
  } else {
    userPet.isNeutered = false;
  }
}
void printPet(Pet userPet) {
  std::cout << userPet.name << ' ' << userPet.age;
  if (!userPet.isNeutered) {
    std::cout << " not";
  }
  std::cout << " neutered\n";
};
