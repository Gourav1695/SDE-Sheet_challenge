#include <bits/stdc++.h>
using namespace std;
void fun(int l, int r, int arr[])

{
    if (l >= r)
        return;
    else
    {
        swap(arr[l], arr[r]);
        fun(l + 1, r - 1, arr);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    fun(0, 3, arr);
    for(int i=0; i<=3;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
