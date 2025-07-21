#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> myList;

    void push(int integerValue)
    {
        myList.push_back(integerValue);
    }

    void pop()
    {
        myList.pop_back();
    }

    int top()
    {
        return myList.back();
    }

    int size()
    {
        return myList.size();
    }

    bool empty()
    {
        return myList.empty();
    }
};

int main()
{
    myStack testStack;

    int inputValue;
    cin >> inputValue;

    for (int i = 0; i < inputValue; i++)
    {
        int integerValue;
        cin >> integerValue;

        testStack.push(integerValue);
    }

    while (!testStack.empty())
    {
        cout << testStack.top() << endl;
        testStack.pop();
    }

    return 0;
}