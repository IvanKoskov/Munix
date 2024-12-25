#ifndef MUNIX_HPP
#define MUNIX_HPP

#include <string>
#include <vector>
#include <cstdlib>

class Munix {
public:
    // Method to execute a command based on parsed input
    void executeCommand(const std::string& input);

private:
    // Method to parse the input string into commands and arguments
    std::vector<std::string> parseInput(const std::string& input);

    // Methods for each command
    void install(const std::string& package);
    void remove(const std::string& package);
    void search(const std::string& package);
     bool shouldExit() const;
     void wgetCommand(const std::string& package);
};

#endif // MUNIX_HPP
