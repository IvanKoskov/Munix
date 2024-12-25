#include "munix.hpp"
#include <iostream>
#include <sstream>

void Munix::executeCommand(const std::string& input) {
    std::vector<std::string> args = parseInput(input);

    if (args.empty()) {
        
        return;
    }

    std::string command = args[0];

    if (command == "exm") {
        exit(0);
    }

    if (args.size() < 2) {
        std::cerr << "Package name required for command: " << command << std::endl;
        return;
    }

    std::string package = args[1];

    // Execute corresponding command
    if (command == "minst") {
        install(package);
    } else if (command == "mrm") {
        remove(package);
    } else if (command == "msrch") {
        search(package);
    } else if (command == "mload") {
     wgetCommand(package);


    }
    
     else {
        std::cerr << "Unknown command: " << command << std::endl;
        std::cerr << "Usage: install <package>, remove <package>, search <package>" << std::endl;
    }
}


std::vector<std::string> Munix::parseInput(const std::string& input) {
    std::vector<std::string> args;
    std::stringstream ss(input);
    std::string word;
    while (ss >> word) {
        args.push_back(word);
    }
    return args;
}


void Munix::install(const std::string& package) {
    std::cout << "Installing package: " << package << std::endl;
   
}


void Munix::remove(const std::string& package) {
    std::cout << "Removing package: " << package << std::endl;
   
}


void Munix::search(const std::string& package) {
    std::cout << "Searching for package: " << package << std::endl;
    
}

bool Munix::shouldExit() const {
    return false;  
}

void Munix::wgetCommand(const std::string& package) {
   


    std::string url = package;

    
    std::string command = "wget " + url;

    // Execute the command using system()
    int result = system(command.c_str());

    if (result != 0) {
        std::cerr << "Error downloading file from " << url << std::endl;
    } else {
        std::cout << "File downloaded successfully from " << url << std::endl;
    }
}