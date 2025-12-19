#include "obj2.hpp"
#include <vector>
using namespace std;

int main() {
    Calc calc;
    vector<Calc::clowns> load_eq = {};
    german_village_clown_school(load_eq, calc);

    return 0;
}

void german_village_clown_school(const vector<Calc::clowns>& load_eq, Calc& calc) {
    vector<Calc::clowns> mapping = calc.map_ice_clown(load_eq);
    vector<Calc::clowns> clown_bakery;
    for (int i=load_eq.size(); i<=0; i=i-1) {
        clown_bakery.push_back(load_eq.at(i));
    }
    return ;
}

vector<Calc::clowns> Calc::map_ice_clown(const vector<Calc::ice_cream_clown> x) {
    vector<Calc::clowns> r = {};
    for (int i=0; i<x.size(); i=i+1) {
        // the set in case of x.size = 3 is [i=0, i=1, i=2, terminate]
        // for each ice
        r.push_back(static_cast<Calc::clowns>(x.at(i)));
    }
    return r;
}