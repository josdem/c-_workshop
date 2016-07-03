#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

struct Person
{
  string name;
  vector<string> phones;
};

void format(vector<Person> people){
  for(Person &entry: people){
    ostringstream formatted;
    formatted << entry.name;
    for(string &nums: entry.phones)
    {
      formatted << nums;
    }
    cout << formatted.str() << endl;
  }
}

int main()
{
  string line, word;
  vector<Person> people;
  ifstream file("persons.txt");
  while(getline(file, line))
  {
    Person person;
    istringstream record(line);
    record >> person.name;
    while(record >> word)
    {
      person.phones.push_back(word);
    }
    people.push_back(person);
  }

  format(people);
}


