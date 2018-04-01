#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}
int partition(int arr[], int l, int r)
{
    int left = l  - 1;
    int right = r;
    while(l <  right)
    {
        if (arr[l] < arr[r])
        {
            swap(arr, ++left, l++);
        }
        else if (arr[l] > arr[r])
        {
            swap(arr, --right, l);
        }
        else
        {
            l++;
        }
    }
     swap(arr, right, r);
    return left+1, right;
}
void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p1,p2 = partition(arr, l, r);
        quicksort(arr, l, p1-1);
        quicksort(arr, p2+1, r);
    }
}
void quicksort (int arr[], int len)
{
    if  (arr == NULL || len < 2)
    {
        return;
    }
    quicksort(arr, 0, len - 1);
}
int main (int argc, char **argv)
{
    int len;
    cin >> len;
    int *na = new int [len];
    for(int i = 0; i < len; ++i)
        cin >> na[i];
    quicksort(na, len);
    for (int i = 0; i < len; ++i)
        cout << na[i] <<" ";
    cout << endl;
    return 0;
}

