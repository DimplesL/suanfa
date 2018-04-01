#include<iostream>
using namespace std;
//template<typename T>
/**merge操作和递归过程在一起**/
//void merge_sort_recursive(int arr[], int reg[], int start, int end) {
//	if (start >= end)
//		return;
//	int len = end - start, mid = (len >> 1) + start;
//	int start1 = start, end1 = mid;
//	int start2 = mid + 1, end2 = end;
//	merge_sort_recursive(arr, reg, start1, end1);
//	merge_sort_recursive(arr, reg, start2, end2);
//	int k = start;
//	while (start1 <= end1 && start2 <= end2)
//		reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
//	while (start1 <= end1)
//		reg[k++] = arr[start1++];
//	while (start2 <= end2)
//		reg[k++] = arr[start2++];
//	for (k = start; k <= end; k++)
//		arr[k] = reg[k];
//}
////template<typename T> //整數或浮點數皆可使用,若要使用物件(class)時必須設定"小於"(<)的運算子功能
//void merge_sort(int arr[], const int len) {
//	int *reg = new int[len];
//	merge_sort_recursive(arr, reg, 0, len - 1);
//	delete[] reg;
//}

void merg(int arr[], int l, int m, int r)
{
    int *res = new int[r - l +1];
    int i =0;
    int p1 = l;
    int p2 = 1 + m;
    int len1 =  r - l + 1;
    while (p1 <= m && p2 <= r)
    {
        res[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
    }
    while (p1 <= m)
    {
        res[i++] = arr[p1++];
    }
    while(p2 <= r)
    {
        res[i++] = arr[p2++];
    }
    for (int s = 0; s < len1; s++)
    {
        arr[l+s] = res[s];
    }
}
void merge_prosess(int arr[], int l, int r)
{
    if (l >= r)
		return;
    int mid = l + ((r - l) >> 1);
    merge_prosess(arr, l, mid);
    merge_prosess(arr, mid+1, r);
    merg(arr, l, mid ,r);
}
void merge_sort(int arr[], int len)
{
    if (arr == NULL || len<2)
        return;
    merge_prosess(arr, 0, len-1);

}




int main (int argc, char **argv)
{
    int len;
    cin >> len;
    int *na = new int [len];
    for(int i = 0; i < len; ++i)
        cin >> na[i];
    merge_sort(na, len);
    for (int i = 0; i < len; ++i)
        cout << na[i] <<" ";
    cout << endl;
    return 0;
}
