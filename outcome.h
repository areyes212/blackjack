#ifndef OUTCOME_H
#define OUTCOME_H
#include <vector>
#include <string>

class Outcome {
public:
    Outcome();
    Outcome(std::string name, int num, int den);
    int winAmount(int amount);
    std::string toString();
private:
    std::string name;
    std::vector<int> ratio;
};

#endif