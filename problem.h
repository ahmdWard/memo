// In problem.h

#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>
#include <string>

class Problem {
private:
    std::string ID;
    std::string name;
    std::string difficulty;

public:
    Problem();
    Problem(const std::string& id, const std::string& n, const std::string& diff);
    void Input();

    // Getter methods
    std::string getID() const;
    std::string getName() const;
    std::string getDifficulty() const;

    // Setter methods
    void setID(const std::string& id);
    void setName(const std::string& n);
    void setDifficulty(const std::string& diff);
};

#endif // PROBLEM_H
