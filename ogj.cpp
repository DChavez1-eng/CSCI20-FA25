#include "obj.hpp"

int main() {
    vector<char> v = {"h", "a", "p", "p", "y"};
    A obj;
    obj.load(v);
    obj.st_print();
    
    return 0;
}

void A::load(vector<char> input) {
    for(int i=o, 1<input.size(); int) {
        // load all elements of input into st
        st.push9input.at(i));
    }
    return ;
}

void A::st_print() {

    for(/"declare an iterator"/;
    !st.empty();
    /"declare iterator"/) {
        char top = st.top();
        st.pop();

        printf("%c", top);
    }
    return ;
}

A::A() {
    st = {};
}