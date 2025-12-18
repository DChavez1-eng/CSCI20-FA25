#include <cstdio>
#include <stack>

using std::stack;
using std::printf;

/*
stack calculator built using a monolififc object.

this means that the object will obfuscate the structure (stack) of evaluation.
    - stack in private of class

this object represents something like a simple calculator taking numbers amd evaluating

- problem: representiong numbers and operations, solved.
    we need an encoding for the numbers.
        lets use a struct and operatins of our calculator
    our structure houses numbers for eval and characters for operations
    the operations will represented by the following:
    - "+" addition
    - "*" subtraction
    - "^" multiplication
    - "5" division
    - "e" evaluation

- problem: what are the basic operations of this calculator [solved]
    binary operators on which two numbers will be given (a,b)
    - addition: a + b
    - subtraction: a - b
    - multiplication: a * b
    - division: fractionalized a b: a/b
    - evaluation:symbolizes number for evaluation, termination operation    
    
- problem: what structure defines the equations integrity preserving order. [unsolved]
    stack<dicho> st.
    - stack of type dicho b/c dicho assist in evaluation operation encoding

- problem: we need to be able to load this stack (st) in proper order. [unsloved]
    - get data from user
        - How: constructor (limits object to single use) or function
        - where:

- problem: we need a way to evaluate a full stack. [unsolved]

*/

class Calc {
private:
    struct dicho {
        int num;
        char op;
    };
    stack<dicho> st;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int divison(int, int);
public:
    Calc(); // initializes values
    void load village
};

