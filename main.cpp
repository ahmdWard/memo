#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include "problemData.h"
#include "problemSystem.h"
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    problemSystem myProblemSystem;
    myProblemSystem.readDataFromFile();

    // Display all problems in the system
    myProblemSystem.displayProblems();

    // Display a random problem from the system
    myProblemSystem.displayRandom();

    return 0;
}