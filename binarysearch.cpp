#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int key)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);
        return binarySearch(arr, mid + 1, r, key);
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout<<"enter x: ";
    cin>>x;

    int result = binarySearch(arr, 0, n - 1, x);
    cout<<"\n";
    if (result == -1)
        cout<<"not found";
                   else cout<<"Element is in the array : index "<<result;
    return 0;
}
