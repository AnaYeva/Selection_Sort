#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int length)
{
    int i, j, minimum;

    for (i = 0; i < length - 1; i++) {

        minimum = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] < arr[minimum])
                minimum = j;
        } //we find minimum

        if (minimum != i)
            swap(arr[minimum], arr[i]);
    }
}

int main()
{
    int arr[] = {8, 4, 1,999, 56, 3, -44, 23, -6, 28, 0,100};

    selectionSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i: arr) {
        cout << i << " ";
    }

    return 0;
}
