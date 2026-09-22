#include <iostream>
#include <sstream>
#include <string>
#include "Student.h"
#include "StudentManager.h"

int main() {
    std::string input;

    while (true) {
        std::cout << "\n=== Student Management Program ===\n"
                  << "1. Find student by name\n"
                  << "2. Remove student by ID\n"
                  << "3. Display all students\n"
                  << "0. Exit\n"
                  << "Enter your choice: ";

        if (!std::getline(std::cin, input)) {
            std::cout << "\nGoodbye!\n";
            break;
        }

        std::istringstream parser(input);
        int choice;
        char extra;

        if (!(parser >> choice) || (parser >> extra)) {
            std::cout << "Invalid input. Enter 0, 1, 2, or 3.\n";
            continue;
        }

        switch (choice) {
            case 1:
                // Connect Student A's findByName function here.
                std::cout << "Find student: awaiting team integration.\n";
                break;

            case 2:
                // Connect Student B's removeById function here.
                std::cout << "Remove student: awaiting team integration.\n";
                break;

            case 3:
                // Connect Student C's printAll function here.
                std::cout << "Display students: awaiting team integration.\n";
                break;

            case 0:
                std::cout << "Goodbye!\n";
                return 0;

            default:
                std::cout << "Invalid choice. Enter 0, 1, 2, or 3.\n";
        }
    }

    return 0;
}