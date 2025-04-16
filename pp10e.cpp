/* File: pp10e.cpp
 * Author: Brennan Duck
 * Print info about a person to console based on the contents of a person object
 */
#include <iostream>

// Declare Person class
class Person {
public:
  // Getter and setter functions
  std::string getName() const { return name; }
  int getAge() const { return age; }
  char getGender() const { return gender; }
  void setAge(int a) {
    // If age is lt 0, it should default to 0
    if (a < 0) {
      age = 0;
    } else {
      age = a;
    }
  }
  void setGender(char g) {
    // If M or F is not inputted, gender should resolve to X
    if (g == 'M' || g == 'F') {
      gender = g;
    } else {
      gender = 'X';
    }
  }
  // Default values
  Person() {
    name = "Jeremiah Bullfrog";
    age = 57;
    gender = 'M';
  }
  // Alternate constructor for when values are specified at instantiation
  Person(std::string n, int a, char g) {
    name = n;
    setAge(a);
    setGender(g);
  }

  // Private characteristics
private:
  std::string name;
  int age;
  char gender;
};

int main() {
  // Declare person with default values and print their characteristics.
  Person person;
  std::cout << person.getName() << ' ' << person.getAge() << ' '
            << person.getGender() << '\n';
  // Declare person with non-default values and print their characteristics.
  Person misterRogers("Mister Rogers", -1, 'P');
  std::cout << misterRogers.getName() << ' ' << misterRogers.getAge() << ' '
            << misterRogers.getGender() << '\n';

  return 0;
}
