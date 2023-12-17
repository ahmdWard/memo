// In problemData.cpp

#include "problemData.h"
#include <fstream>
#include <iostream>

void readDataFromFile(const std::string& fileName, std::vector<Problem>& problems) {
    std::ifstream file(fileName);

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << fileName << std::endl;
        exit(1);
    }

    while (file >> std::ws, !file.eof()) {  // Skip leading whitespace before reading
        Problem newProblem;

        // Use the setter methods to set the private members 'name' and 'difficulty'
        std::string tempName,tempID, tempDifficulty;
        file >>tempID>> tempName >> tempDifficulty;
        newProblem.setID(tempID);
        newProblem.setName(tempName);
        newProblem.setDifficulty(tempDifficulty);

        if (!file.fail()) {
            problems.push_back(newProblem);
        } else {
            std::cerr << "Error reading data from file: " << fileName << std::endl;
            exit(1);
        }
    }

    file.close();
}
