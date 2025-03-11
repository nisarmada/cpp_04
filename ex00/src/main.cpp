/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:50:17 by nikos         #+#    #+#                 */
/*   Updated: 2025/03/11 20:26:06 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../animal.hpp"


int main() {
    std::cout << "=============== TESTING ANIMAL CLASSES ===============" << std::endl;
    
    // Required test from the exercise
    std::cout << "\n----- Basic Required Test -----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\nSound test:" << std::endl;
    i->makeSound(); // Will output the cat sound!
    j->makeSound(); // Will output the dog sound!
    meta->makeSound(); // Will output the animal sound
    
    // Cleanup required objects
    std::cout << "\n----- Cleanup Required Test -----" << std::endl;
    delete meta;
    delete j;
    delete i;
    
    // Additional tests for Animal class
    std::cout << "\n----- Additional Animal Tests -----" << std::endl;
    
    // Test constructors and assignment operators
    std::cout << "\nTesting constructors:" << std::endl;
    Animal* animal1 = new Animal();
    Animal* animal2 = new Animal("Custom Animal");
    Animal* animal3 = new Animal(*animal1); // Copy constructor
    
    std::cout << "\nTesting assignment operator:" << std::endl;
    *animal3 = *animal2; // Assignment operator
    
    // Test sound making
    std::cout << "\nTesting sounds:" << std::endl;
    animal1->makeSound();
    animal2->makeSound();
    animal3->makeSound();
    
    // Cleanup animal objects
    std::cout << "\nCleaning up Animal objects:" << std::endl;
    delete animal1;
    delete animal2;
    delete animal3;
    
    // Test Dog class
    std::cout << "\n----- Testing Dog Class -----" << std::endl;
    
    // Test constructors and assignment operators for Dog
    std::cout << "\nTesting Dog constructors:" << std::endl;
    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog(*dog1); // Copy constructor
    Dog* dog3 = new Dog();
    
    std::cout << "\nTesting Dog assignment operator:" << std::endl;
    *dog3 = *dog1; // Assignment operator
    
    // Test Dog sound making
    std::cout << "\nTesting Dog sounds:" << std::endl;
    dog1->makeSound();
    dog2->makeSound();
    dog3->makeSound();
    
    // Test polymorphism with Dog
    std::cout << "\nTesting Dog polymorphism:" << std::endl;
    Animal* animalDog = new Dog();
    animalDog->makeSound(); // Should make dog sound via polymorphism
    
    // Cleanup Dog objects
    std::cout << "\nCleaning up Dog objects:" << std::endl;
    delete dog1;
    delete dog2;
    delete dog3;
    delete animalDog;
    
    // Test Cat class
    std::cout << "\n----- Testing Cat Class -----" << std::endl;
    
    // Test constructors and assignment operators for Cat
    std::cout << "\nTesting Cat constructors:" << std::endl;
    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat(*cat1); // Copy constructor
    Cat* cat3 = new Cat();
    
    // Test Cat sound making
    std::cout << "\nTesting Cat sounds:" << std::endl;
    cat1->makeSound();
    cat2->makeSound();
    cat3->makeSound();
    
    // Test polymorphism with Cat
    std::cout << "\nTesting Cat polymorphism:" << std::endl;
    Animal* animalCat = new Cat();
    animalCat->makeSound(); // Should make cat sound via polymorphism
    
    // Cleanup Cat objects
    std::cout << "\nCleaning up Cat objects:" << std::endl;
    delete cat1;
    delete cat2;
    delete cat3;
    delete animalCat;
    
    // Test WrongAnimal and WrongCat
    std::cout << "\n=============== TESTING WRONG ANIMAL CLASSES ===============" << std::endl;
    
    // Test WrongAnimal and WrongCat to show difference in polymorphism
    std::cout << "\n----- Testing WrongAnimal/WrongCat -----" << std::endl;
    const wrongAnimal* wrongMeta = new wrongAnimal();
    const wrongAnimal* wrongI = new wrongCat();
    
    std::cout << "\nSound test for wrong animals:" << std::endl;
    wrongI->makeSound(); // Should output WrongAnimal sound, not WrongCat sound
    wrongMeta->makeSound();
    
    std::cout << "\nDirect WrongCat sound test:" << std::endl;
    const wrongCat* directWrongCat = new wrongCat();
    directWrongCat->makeSound(); // This will call WrongCat's makeSound directly
    
    // Cleanup wrong animal objects
    std::cout << "\nCleaning up wrong animal objects:" << std::endl;
    delete wrongMeta;
    delete wrongI;
    delete directWrongCat;
    
    // Further testing of WrongAnimal and WrongCat
    std::cout << "\n----- Additional WrongAnimal Tests -----" << std::endl;
    
    // Test constructors and assignment operators
    std::cout << "\nTesting WrongAnimal constructors:" << std::endl;
    wrongAnimal* wanimal1 = new wrongAnimal();
    wrongAnimal* wanimal2 = new wrongAnimal(*wanimal1); // Copy constructor
    
    std::cout << "\nTesting WrongAnimal assignment operator:" << std::endl;
    *wanimal2 = *wanimal1; // Assignment operator
    
    // Cleanup wrong animal objects
    std::cout << "\nCleaning up WrongAnimal objects:" << std::endl;
    delete wanimal1;
    delete wanimal2;
    
    // Testing WrongCat
    std::cout << "\n----- Additional WrongCat Tests -----" << std::endl;
    
    // Test constructors and assignment operators
    std::cout << "\nTesting WrongCat constructors:" << std::endl;
    wrongCat* wcat1 = new wrongCat();
    wrongCat* wcat2 = new wrongCat(*wcat1); // Copy constructor
    wrongCat* wcat3 = new wrongCat();
    
    std::cout << "\nTesting WrongCat assignment operator:" << std::endl;
    *wcat3 = *wcat1; // Assignment operator
    
    // Test WrongCat sound making
    std::cout << "\nTesting WrongCat sounds (direct call):" << std::endl;
    wcat1->makeSound();
    wcat2->makeSound();
    wcat3->makeSound();
    
    // Cleanup WrongCat objects
    std::cout << "\nCleaning up WrongCat objects:" << std::endl;
    delete wcat1;
    delete wcat2;
    delete wcat3;
    
    std::cout << "\n=============== END OF TESTS ===============" << std::endl;
    
    return 0;
}

