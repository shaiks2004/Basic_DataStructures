#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {4, 2, 0, 6, 8, 1};

    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {

        bool is_swap = false; // by using the boolean we can make the swaps less
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                is_swap = true;
            }
        }
        if (!is_swap)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}