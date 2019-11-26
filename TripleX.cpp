#include <iostream>

int main()
{
    std::cout << "Entering TripleX\n";
    std::cout << "================\n";

    std::cout << "You hurry up, and move into the data center room.\n";
    std::cout << "Your heart is racing, and the adrenaline is racing through "
                 "your veins."
              << std::endl;
    std::cout << "Some of the machines in front you have USB sockets.\n";
    std::cout << "Taking out your dev machine from your backpack, it takes you"
                 " a couple of tries to plug it in; your hand is trembling from"
                 "the stress.\n";
    std::cout << "Finally, with your trusty Arch Linux OS, you're ready.\n\n";

    int firstNumber = 5;
    int secondNumber = 10;
    int thirdNumber = 20;
    const int sum = firstNumber + secondNumber + thirdNumber;
    const int product = firstNumber * secondNumber * thirdNumber;

    std::cout << "First number: " << firstNumber << "\n";
    std::cout << "Second number: " << secondNumber << "\n";
    std::cout << "Third number: " << thirdNumber << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Product: " << product << "\n";

    return 0;
}