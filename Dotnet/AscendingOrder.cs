/*
    Given an integer array `arr`, determine whether the elements are arranged in non‑decreasing order 
    (each element is **less than or equal to** the next one). Equal values are allowed, and any pair of 
    consecutive equal values is considered sorted. Return `true` if the entire array satisfies this condition; 
    otherwise, return `false`.
*/

static bool IsAscending(List<int> arr)
{
    int pre = arr.FirstOrDefault();

    foreach (var item in arr)
    {
        if (pre > item)
        {
            return false;
        }

        pre = item;
    }

    return true;
}


List<int> arr = [5, 12, 12, 20, 35];
Console.WriteLine(IsAscending(arr)); // True

List<int> arr2 = [30, 25, 40, 10];
Console.WriteLine(IsAscending(arr2)); // False