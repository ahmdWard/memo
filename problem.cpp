// In problem.cpp

#include "problem.h"

Problem::Problem() : ID(""), name(""), difficulty("") {}

Problem::Problem(const std::string& id, const std::string& n, const std::string& diff)
        : ID(id), name(n), difficulty(diff) {}

void Problem::Input() {
    std::cout << "Enter Problem ID: ";
    std::cin >> ID;
    std::cout << "Enter Problem Name: ";
    std::cin >> name;
    std::cout << "Enter Problem Difficulty: ";
    std::cin >> difficulty;
}

std::string Problem::getID() const {
    return ID;
}

std::string Problem::getName() const {
    return name;
}

std::string Problem::getDifficulty() const {
    return difficulty;
}

// Implementation of setter methods
void Problem::setID(const std::string& id) {
    ID = id;
}

void Problem::setName(const std::string& n) {
    name = n;
}

void Problem::setDifficulty(const std::string& diff) {
    difficulty = diff;
}
