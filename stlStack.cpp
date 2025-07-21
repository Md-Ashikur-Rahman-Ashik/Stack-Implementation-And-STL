#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> ourStack;

    int stackSize;
    cin >> stackSize;

    for (int i = 0; i < stackSize; i++)
    {
        int inputValue;
        cin >> inputValue;

        ourStack.push(inputValue);
    }

    while (!ourStack.empty())
    {
        cout << ourStack.top() << endl;
        ourStack.pop();
    }

    return 0;
}