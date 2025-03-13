/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:14:28 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:27:09 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/13 17:30:15 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/13 17:30:15 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../Animal.hpp"
#include <iostream>

void testAbstractClass() {
    std::cout << "\n----- Testing Abstract Class -----\n" << std::endl;
    
    // This should not compile if Animal is truly abstract
    // Animal a; // Uncommenting this line should cause a compilation error
    
    // These should work fine
    Animal* d = new Dog();
    Animal* c = new Cat();
    
    std::cout << "Testing polymorphic behavior:" << std::endl;
    d->makeSound();
    c->makeSound();
    
    delete d;
    delete c;
}

void testDeepCopy() {
    std::cout << "\n----- Testing Deep Copy -----\n" << std::endl;
    
    std::cout << "Creating original dog:" << std::endl;
    Dog originalDog;
    
    std::cout << "\nCreating copied dog using copy constructor:" << std::endl;
    Dog copiedDog(originalDog);
    
    std::cout << "\nTesting both dogs make sound:" << std::endl;
    originalDog.makeSound();
    copiedDog.makeSound();
    
    std::cout << "\nCreating original cat:" << std::endl;
    Cat originalCat;
    
    std::cout << "\nCreating and assigning to another cat using assignment operator:" << std::endl;
    Cat assignedCat;
    assignedCat = originalCat;
    
    std::cout << "\nTesting both cats make sound:" << std::endl;
    originalCat.makeSound();
    assignedCat.makeSound();
    
    std::cout << "\nDestructing all objects (should see 4 Brain destructors called):" << std::endl;
    // Objects will be automatically destructed when function ends
}

void testAnimalArray() {
    std::cout << "\n----- Testing Animal Array -----\n" << std::endl;
    
    const int arraySize = 10;
    Animal* animals[arraySize];
    
    // Fill array with half Dogs and half Cats
    std::cout << "Creating array of " << arraySize << " animals:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        if (i < arraySize / 2) {
            std::cout << "Adding Dog at position " << i << std::endl;
            animals[i] = new Dog();
        } else {
            std::cout << "Adding Cat at position " << i << std::endl;
            animals[i] = new Cat();
        }
    }
    
    // Test polymorphic behavior
    std::cout << "\nTesting sounds from all animals:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Animal " << i << " says: ";
        animals[i]->makeSound();
    }
    
    // Delete all animals
    std::cout << "\nDeleting all animals:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Deleting animal at position " << i << std::endl;
        delete animals[i];
    }
}

void testLeakCheck() {
    std::cout << "\n----- Testing for Memory Leaks (as in the assignment) -----\n" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j; // should not create a leak
    delete i;
}

int main() {
    std::cout << "===== STARTING COMPREHENSIVE TESTS =====\n" << std::endl;
    
    testAbstractClass();
    testDeepCopy();
    testAnimalArray();
    testLeakCheck();
    
    std::cout << "\n===== ALL TESTS COMPLETED =====\n" << std::endl;
    
    // Uncomment to check for leaks with system pause
    std::cout << "Run 'leaks' command in another terminal to check for memory leaks." << std::endl;
    std::cout << "Press enter to continue..." << std::endl;
    std::cin.get();
    
    return 0;
}
