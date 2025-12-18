#include <iostream>
#include <stack>

using name space std;
int main ()
{
    stack<int> numbers;

    cout << "size: " << numbers.size() <<endl;

    if (numbers.empty())
    {
        cout << "stack is empty." << endl;
    }

    numbers.push(8);
    cout << "size: " << number.size() << endl;
    if (!number.empty())
    {
        cout << "stack is not empty." << endl;
        cout << "top: " << number.top() << endl;
        numbers.push(9);
        numbers,push(5);

        cout << endl;
        cout << "top: " << numbers.top() << endl;
        cout << "size: " << number.size() << endl;

        number.pop();

        cout << endl;
        cout << "top: " << numbers.top() << endl;
        cout << "size: " << number.size() << endl;

        //   
        //   9 - top
        //   8 - bottom

    }
    return 0;
}