#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *previousPointer;
    Node *nextPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->previousPointer = NULL;
        this->nextPointer = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int countSize = 0;

    void push(int integerValue)
    {
        countSize++;
        Node *newNode = new Node(integerValue);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->nextPointer = newNode;
            newNode->previousPointer = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        countSize--;
        Node *deleteNode = tail;
        if (head->nextPointer == NULL)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            tail = tail->previousPointer;
            tail->nextPointer = NULL;
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->integerValue;
    }

    int size()
    {
        return countSize;
    }

    bool empty()
    {
        if (head == NULL)
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
    myStack doublyLinkedStack;

    int inputSize;
    cin >> inputSize;

    for (int i = 0; i < inputSize; i++)
    {
        int inputValue;
        cin >> inputValue;

        doublyLinkedStack.push(inputValue);
    }

    while (!doublyLinkedStack.empty())
    {
        cout << doublyLinkedStack.top() << endl;
        doublyLinkedStack.pop();
    }

    return 0;
}