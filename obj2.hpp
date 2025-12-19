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
    struct clowns {
        int num;
        char op;
    };
    stack<clowns> clown_bakery;
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int divison(int, int);
public:
    // Calc(); // initializes values
    struct ice_cream_clown {
        int ice_cream;
        char clown_nose;
    };
    void load_village();
};

#include <stack>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using std::stack;
using std::printf;

/*
encode operations: + = 9999, - = 9998, * = 10000

calc is using prefix notation, profix stacking equations
1 + 1 => +11
1 + 1 + 2   => +(+11)2
            => not +11+
*/

stack<int> addition_on_numbers(stack<int>& st, int op) {
    if(op == 9999) {
        int new_op = st.top();
        st.pop();
        addition_on_numbers(st, new_op);
        printf("we see another addition");
        return ;
    }
    else {
        // numbers
        printf("your result is %d", (op + st.top()));
        st.pop();
        return ;
    }
}

void choice(stack<int> st, int op) {
    if(op == 9999) {
        // addition
        int new_op = st.top();
        st.pop();
        addition_on_numbers(st, new_op);
    }
        else {
            // we can see both numbers
            printf("WRONG FUNCTION first number %d, second number %d", op, st.top());
        }
        return;
    }

int main() {
    stack<int> st;

    // push the equation +11
    st.push(1);
    st.push(1);
    st.push(9999);

    // we know that 9999 = +
    // stack : 9999 1 1

    int op = st.top();
    st.pop();
    choice(st, op);

    for (int i = 0; i < 10; i++) {
        std::cout << "9999:" << i << std::endl;
    }
        
    

    return 0;
}