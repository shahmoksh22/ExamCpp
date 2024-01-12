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
        cout << "Listen to " << name << " making a sound: " << sound << endl;
    }

    string getName() const {
        return name;
    }
};

class Dog : public Animal {
public:
    Dog(const string& dogName) : Animal(dogName, "Woof Woof!") {}

    void makeSound() const override {
        cout << "Here's " << getName() << " barking: Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(const string& catName) : Animal(catName, "Meow Meow!") {}

    void makeSound() const override {
        cout << "Hear " << getName() << " meowing: Meow Meow!" << endl;
    }
};

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    cout << "Let's hear what our dog, " << myDog.getName() << ", has to say:" << endl;
    myDog.makeSound();

    cout << "\nNow, let's listen to our cat, " << myCat.getName() << ", expressing itself:" << endl;
    myCat.makeSound();

    return 0;
}
