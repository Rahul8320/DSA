#include <iostream>

using namespace std;

// Array always fill from left.
class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    Array();
    Array(int cap);
    void createArray(int);
    void insertInArray(int, int);
    void appendInArray(int);
    void deleteFromArray(int);
};

Array::Array()
{
    ptr = nullptr;
}

Array::Array(int cap)
{
    capacity = cap;
    lastIndex = -1;
    int *ptr = new int[cap];
}

void Array::createArray(int cap)
{
    if (ptr != nullptr)
    {
        delete[] ptr;
    }

    capacity = cap;
    lastIndex = -1;
    int *ptr = new int[cap];
}

void Array::insertInArray(int index, int data)
{
    int i;
    if (index < 0 || index > lastIndex + 1)
    {
        cout << "Invalid Index" << endl;
    }
    else if (lastIndex == capacity - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        for (i = lastIndex; i >= index; i--)
        {
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = data;
        lastIndex++;
    }
}

void Array::appendInArray(int data)
{
    if (lastIndex == capacity - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        ptr[lastIndex + 1] = data;
        lastIndex++;
    }
}

void Array::deleteFromArray(int index)
{
    int i;
    if (index < 0 || index > lastIndex)
    {
        cout << "Index out of range" << endl;
    }
    else
    {
        for (i = index; i < lastIndex; i++)
        {
            ptr[i] = ptr[i + 1];
        }
        lastIndex--;
    }
}

int main()
{
    cout << "Hello World!" << endl;

    return 0;
}