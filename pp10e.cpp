#include <iostream>

class Person {
public:
  std::string getName() const { return name; }
  int getAge() const { return age; }
  char getGender() const { return gender; }
  void setAge(int a) {
    if (a < 0) {
      age = 0;
    } else {
      age = a;
    }
  }
  void setGender(char g) {
    if (g == 'M' || g == 'F') {
      gender = g;
    } else {
      gender = 'X';
    }
  }
  Person() {
    name = "Jeremiah Bullfrog";
    age = 57;
    gender = 'M';
  }
  Person(std::string n, int a, char g) {
    name = n;
    setAge(a);
    setGender(g);
  }

private:
  std::string name;
  int age;
  char gender;
};

int main() {
  Person person;
  std::cout << person.getName() << ' ' << person.getAge() << ' '
            << person.getGender() << '\n';
  Person misterRogers("Mister Rogers", -1, 'P');
  std::cout << misterRogers.getName() << ' ' << misterRogers.getAge() << ' '
            << misterRogers.getGender() << '\n';

  return 0;
}
