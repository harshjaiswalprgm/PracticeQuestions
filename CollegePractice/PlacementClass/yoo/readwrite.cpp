#include <iostream>
#include <fstream>
using namespace std;
class Person
{
public:
  Person(std::string name, int age) : name(name), age(age) {}

  std::string GetName() const { return name; }
  int GetAge() const { return age; }

private:
  std::string name;
  int age;
};

int main()
{
  // Create an ifstream object to read from the file "input.txt".
  std::ifstream input("input.txt");

  // Create an ofstream object to write to the file "output.txt".
  std::ofstream output("output.txt");

  // Check if the input file exists.
  if (!input)
  {
    std::cout << "File does not exist." << std::endl;
    return 1;
  }

  // Read from the input file and create a new Person object.
  Person person;
  input >> person.GetName() >> person.GetAge();

  // Write the Person object to the output file.
  output << person.GetName() << " " << person.GetAge() << std::endl;

  // Close the files.
  input.close();
  output.close();

  return 0;
}
