#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> ourVector;

    void push(int integerValue)
    {
        ourVector.push_back(integerValue);
    }

    void pop()
    {
        ourVector.pop_back();
    }

    int top()
    {
        return ourVector.back();
    }

    int size()
    {
        return ourVector.size();
    }

    bool empty()
    {
        if (ourVector.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // staticObject.push(10);
    // staticObject.push(20);
    // staticObject.push(30);

    // if (staticObject.empty() == false)
    // {
    //     staticObject.pop();
    //     cout << staticObject.top() << endl;
    // }

    int stackSize;
    cin >> stackSize;

    myStack staticObject;

    for (int i = 0; i < stackSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        staticObject.push(inputValue);
    }

    while (!staticObject.empty())
    {
        cout << staticObject.top() << endl;
        staticObject.pop();
    }

    return 0;
}