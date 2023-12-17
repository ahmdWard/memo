#ifndef PROBLEMSYSTEM_H
#define PROBLEMSYSTEM_H

#include <vector>
#include "problem.h"

class problemSystem {
private:
    std::vector<Problem> problems;

public:
    void readDataFromFile(const std::string& fileName = "D:\\courses\\c++\\STLS section\\memo\\problems.txt");
    void addProblem();
    void displayProblems();
    void displayRandom();
    void displayColoredDifficulty(const std::string& difficulty);
    void displayColoredProblem(const Problem& problem);
};

#endif // PROBLEMSYSTEM_H
