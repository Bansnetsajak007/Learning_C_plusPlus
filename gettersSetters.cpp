#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Getter for name
    string getName() const {
        return name;
    }

    // Setter for name
    void setName(const string& newName) {
        name = newName;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age value." << endl;
        }
    }
};

int main() {
    Person person;
    person.setName("John");
    person.setAge(30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}
