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
    return 0;
}