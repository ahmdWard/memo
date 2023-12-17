// In problemSystem.cpp

#include "problemSystem.h"
#include "problemData.h"
#include "colorConstants.h"
void problemSystem::readDataFromFile(const std::string& fileName) {
    ::readDataFromFile(fileName, problems);
}

void problemSystem::addProblem() {
    std::cout << "Enter Problem Data (ID, Name, Difficulty):" << std::endl;
    Problem newProblem;
    newProblem.Input();
    problems.push_back(newProblem);
    std::cout << "Problem added to the system." << std::endl;
}


void problemSystem::displayProblems() {
    std::cout << "All Problems in the System:" << std::endl;
    for (const auto& p : problems) {
        displayColoredProblem(p);
    }
}
void problemSystem::displayColoredProblem(const Problem& problem) {
    std::cout << "ID: " << CYAN << problem.getID() << RESET << ", Name: " << MAGENTA << problem.getName() << RESET << ", Difficulty: ";
    displayColoredDifficulty(problem.getDifficulty());
}

void problemSystem::displayColoredDifficulty(const std::string& difficulty) {
    if (difficulty == "easy") {
        std::cout << GREEN << difficulty << RESET << "\n";
    } else if (difficulty == "medium") {
        std::cout << YELLOW << difficulty << RESET << "\n";
    } else if (difficulty == "Hard") {
        std::cout << RED << difficulty << RESET << "\n";
    }
}

void problemSystem::displayRandom() {
    std::cout << "Randomly Chosen Problem:" << std::endl;
    if (!problems.empty()) {
        int random = rand() % problems.size();
        const Problem& randomProblem = problems[random];
        displayColoredProblem(randomProblem);
    } else {
        std::cout << "No problems in the system." << std::endl;
    }
}
