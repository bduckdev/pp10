#include <iomanip>
#include <iostream>

struct Pet {
  std::string name;
  int age;
  bool isNeutered;
};
void printPets(Pet userPet[], int len);

int main() {
  Pet pets[5] = {{"Fido", 7, true},
                 {"Puppy", 1, false},
                 {
                     "Kitty",
                     1,
                     false,
                 },
                 {"Brutus", 11, true},
                 {"Bilbo", 15, true}};
  printPets(pets, 5);

  return 0;
}

void printPets(Pet userPets[], int len) {
  std::cout << std::setw(10) << std::left << "Name" << std::setw(5) << "Age"
            << "Neutered" << '\n';
  for (int i = 0; i < 23; i++) {
    std::cout << '-';
  }
  std::cout << '\n';
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
