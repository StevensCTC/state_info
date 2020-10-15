#include "stateclass.cpp"

using namespace std;

int main() {

    State* nj = new State("New Jersey", "Liberty and Prosperity", 1787);
    nj->addFunFact("Did you know? NJ is considered the \"Diner Capital of the Country\" with an estimated 525 diners!");
    nj->addFunFact("Did you know? The first Indian reservation was in Shamong Township!");
    nj->addFunFact("Did you know? Cape May is considered the first seaside resort in America!");
    nj->addFunFact("Did you know? The entire borough of Roosevelt is a National Historical Landmark!");
    nj->addFunFact("Did you know? NJ has the highest density population of any state in the US!");

    displayStateInfo(nj);

    return 0;
}
