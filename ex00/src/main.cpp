/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:50:17 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/10 17:50:27 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../animal.hpp"

int main() {
    // Testing default constructors
    std::cout << "Creating default Animal..." << std::endl;
    Animal *animal = new Animal();  // Animal created
    animal->makeSound();            // Animal makes sound
    delete animal;                  // Animal destroyed

    // Testing parameterized constructor
    std::cout << "\nCreating parameterized Animal (Dog)..." << std::endl;
    Animal *dog = new Animal("Dog");
    dog->makeSound();               // Dog makes sound
    delete dog;                     // Dog destroyed

    // Testing Dog creation and makeSound
    std::cout << "\nCreating Dog..." << std::endl;
    Dog *myDog = new Dog();         // Dog created
    myDog->makeSound();             // Dog makes sound
    delete myDog;                   // Dog destroyed

    // Testing copy constructor for Dog
    std::cout << "\nCreating Dog2 via copy constructor from Dog1..." << std::endl;
    Dog *dogCopy = new Dog(*myDog); // Dog copied
    dogCopy->makeSound();           // Dog makes sound
    delete dogCopy;                 // Dog destroyed

    // Testing assignment operator for Dog
    std::cout << "\nAssigning Dog1 to Dog3 using assignment operator..." << std::endl;
    Dog *dog3 = new Dog();
    *dog3 = *myDog;                // Dog assigned
    dog3->makeSound();              // Dog makes sound
    delete dog3;                    // Dog destroyed

    // Testing Cat creation and makeSound
    std::cout << "\nCreating Cat..." << std::endl;
    Cat *myCat = new Cat();         // Cat created
    myCat->makeSound();             // Cat makes sound
    delete myCat;                   // Cat destroyed

    // Testing copy constructor for Cat
    std::cout << "\nCreating Cat2 via copy constructor from Cat1..." << std::endl;
    Cat *catCopy = new Cat(*myCat); // Cat copied
    catCopy->makeSound();           // Cat makes sound
    delete catCopy;                 // Cat destroyed

    // Testing assignment operator for Cat
    std::cout << "\nAssigning Cat1 to Cat3 using assignment operator..." << std::endl;
    Cat *cat3 = new Cat();
    *cat3 = *myCat;                // Cat assigned
    cat3->makeSound();              // Cat makes sound
    delete cat3;                    // Cat destroyed

    // Testing Animal as base class pointer
    std::cout << "\nTesting Animal pointer with Dog and Cat..." << std::endl;
    Animal *animalPtr = new Dog();  // Animal pointer to Dog
    animalPtr->makeSound();         // Dog makes sound (Polymorphism)
    delete animalPtr;               // Dog destroyed

    animalPtr = new Cat();          // Animal pointer to Cat
    animalPtr->makeSound();         // Cat makes sound (Polymorphism)
    delete animalPtr;               // Cat destroyed

    // Final cleanup and memory check
    std::cout << "\nEnd of program. All destructors should have been called." << std::endl;

    return 0;
}
