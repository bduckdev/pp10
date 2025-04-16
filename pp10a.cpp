#include <iostream>

// Declare struct
struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};

int main() {
  struct Pet userPet;
  char isNeutered;
  std::cout << "Enter pet name: ";
  std::cin >> userPet.name;
  std::cout << "Enter pet age: ";
  std::cin >> userPet.age;
  std::cout << "Has pet been neutered (y/n): ";
  std::cin >> isNeutered;
  if (isNeutered == 'Y' || isNeutered == 'y') {
    userPet.isNeutered = true;
  } else {
    userPet.isNeutered = false;
  }

  std::cout << userPet.name << " " << userPet.age << " ";
  if (!userPet.isNeutered) {
    std::cout << "not ";
  }
  std::cout << "neutered\n";

  return 0;
}
