#include "stateclass.cpp"

using namespace std;

int main() {

    State* pa = new State("Pennsylvania", "Virtue, Liberty and Independence", 1681);
    pa->addFunFact("Did you know? Part of PA was originally the colony of New Sweden!");
    pa->addFunFact("Did you know? The Declaration of Independence and Constitution were both drafted here!");
    pa->addFunFact("Did you know? The polio vaccine was invented here in 1955!");

    displayStateInfo(pa);

    return 0;
}