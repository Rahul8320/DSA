/*
    Finding the Right‑Side Leaders:
    Given an array **arr** of length **n**, identify all *leaders* in the array.
    An element is called a leader if it is greater than or equal to every element that appears to its right.
    The rightmost element is always a leader because there are no elements after it.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> &arr)
{
    int size = arr.size();
    int highest = arr[size - 1];
    vector<int> result;

    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] >= highest)
        {
            result.push_back(arr[i]);
            highest = arr[i];
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> result = findLeaders(arr);

    for (auto it : result)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}