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

    void push(int integerValue)
    {
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
        }
    }

    void pop()
    {
        Node *deleteNode = tail;
        tail = tail->previousPointer;
        tail->nextPointer = NULL;
        delete deleteNode;
    }

    int top()
    {
        return tail->integerValue;
    }

    int size()
    {
        Node *tmp = head;
        int count = 0;

        while (tmp != NULL)
        {
            count++;
            tmp = tmp->nextPointer;
        }

        return count;
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
    

    return 0;
}