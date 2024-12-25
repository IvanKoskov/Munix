#include "munix.hpp"
#include <iostream>

int main() {
    Munix munix; // Create an instance of Munix
    std::string input;

    // Infinite loop to continuously accept user input
    while (true) {
        std::cout << "Munix> "; // Display a prompt to the user
        std::getline(std::cin, input); // Read the input from the user
        
      

        // Execute the command
        munix.executeCommand(input);
    }

    std::cout << "Exiting Munix..." << std::endl;
    return 0;
}
