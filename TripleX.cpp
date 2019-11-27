#include <iostream>

/**
     * TODO: refactor to more intent revealing names. first/second/third
     * are too generic.
     */
int FirstCode = 5;
int SecondCode = 10;
int ThirdCode = 20;
const int CodeSum = FirstCode + SecondCode + ThirdCode;
const int CodeProduct = FirstCode * SecondCode * ThirdCode;
int PlayerResponse1, PlayerResponse2, PlayerResponse3, PlayerResponseSum,
    PlayerResponseProduct;

char printStory()
{
    // TODO: Find a better name
    std::cout << "Entering TripleX\n";
    std::cout << "================\n";

    std::cout << "You hurry up, and move into the data center room.\n";
    std::cout << "Your heart is racing, and the adrenaline is racing through "
                 "your veins."
              << std::endl;
    std::cout << "Some of the machines in front you have USB sockets.\n";
    std::cout << "Taking out your dev machine from your backpack, it takes you"
                 " a couple of tries to plug it in; your hand is trembling "
                 "from the stress.\n";
    std::cout << "Finally, with your trusty Arch Linux OS, you're ready.\n\n";
}

int main()
{
    printStory();

    std::cout << "Code Review\n";
    std::cout << "===========\n";
    std::cout << "✖ There are 3 numbers in the code\n";
    std::cout << "✖ They add up to: " << CodeSum << "\n";
    std::cout << "✖ The codes multiply to: " << CodeProduct << "\n\n";

    std::cout << "Enter first code:\n";
    std::cin >> PlayerResponse1;

    std::cout << "Enter second code:\n";
    std::cin >> PlayerResponse2;

    std::cout << "Enter third code:\n";
    std::cin >> PlayerResponse3;

    std::cout << "You responded with: " << PlayerResponse1 << ", ";
    std::cout << PlayerResponse2 << ", and " << PlayerResponse3 << "\n\n";

    PlayerResponseProduct = PlayerResponse1 * PlayerResponse2 * PlayerResponse3;
    PlayerResponseSum = PlayerResponse1 + PlayerResponse2 + PlayerResponse3;

    std::cout << "Product: " << PlayerResponseProduct << "\n";
    std::cout << "Sum: " << PlayerResponseSum << "\n";

    return 0;
}
