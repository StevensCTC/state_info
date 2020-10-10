#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class State {
public:
    State(string name, string motto, int yearFounded) : 
        name(name), motto(motto), yearFounded(yearFounded) {};

    string getName() {
        return this->name;
    }
    string getMotto() {
        return this->motto;
    }
    int getYearFounded() {
        return this->yearFounded;
    }
    void addFunFact(string newFunFact) {
        funFactList.push_back(newFunFact);
    }
    void funFacts() {
        for (int i = 0; i < this->funFactList.size(); i++) {
            cout << funFactList[i] << endl;
        }
    }


private:
    string name;
    string motto;
    int yearFounded;
    vector<string> funFactList;
};

void displayStateInfo(State* state) {
    cout << "Name: " << state->getName() << endl;
    cout << "Motto: " << state->getMotto() << endl;
    cout << "Founded in: " << state->getYearFounded() << endl;
    cout << "Have some fun facts!" << endl;
    state->funFacts();
};