#include<bits/stdc++.h>
using namespace std;
void merge (int arr1[],int arr2[],int n, int m )
{
    int i,k;
    for (i = 0; i<n;i++)
    {
        if (arr1[i]>arr2[0])
        {
            int temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;

        }
        int first=arr2[0];
        for (k=1;k<m&&arr2[k]<first;k++)
        {
            arr2[k-1]=arr2[k];

        }
        arr2[k-1]=first;

    }
};
int main() {
    int arr1[] = {1,4,7,8,10};
	int arr2[] = {2,3,66};
    cout<<"Before merge:"<<endl;
    for (int i = 0; i < 5; i++) {
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
      cout<<arr2[i]<<" ";
    }
    cout<<endl;
    merge(arr1, arr2, 5, 3);
    cout<<"After merge:"<<endl;
    for (int i = 0; i <5; i++) {
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
      cout<<arr2[i]<<" ";
    }

  }