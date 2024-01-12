#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    Animal(const string& animalName, const string& animalSound) : name(animalName), sound(animalSound) {}

    virtual void makeSound() const {
        cout << name << " makes the sound: " << sound << endl;
    }

    virtual void displayDetails() const {
        cout << "Details about " << name << ":" << endl;
        cout << "Sound it makes: " << sound << endl;
    }

    string getName() const {
        return name;
    }
};

class Dog : public Animal {
public:
    Dog(const string& dogName) : Animal(dogName, "Woof Woof!") {}

    void makeSound() const override {
        cout << getName() << " barks: Woof Woof!" << endl;
    }

    void displayDetails() const override {
        Animal::displayDetails();
        cout << "Type: Dog" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& catName) : Animal(catName, "Meow Meow!") {}

    void makeSound() const override {
        cout << getName() << " meows: Meow Meow!" << endl;
    }

    void displayDetails() const override {
        Animal::displayDetails();
        cout << "Type: Cat" << endl;
    }
};

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    Animal* animals[2];
    animals[0] = &myDog;
    animals[1] = &myCat;

    for (int i = 0; i < 2; ++i) {
        animals[i]->displayDetails();
        cout << endl;
    }

    return 0;
}
