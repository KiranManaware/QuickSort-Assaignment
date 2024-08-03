//Question 3
//  Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,10,4,6,5,7,8,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int idx1=-1,idx2=-1;
    bool flag=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(idx1==-1) idx1=i;
            else idx2=i;
        }
    }
    cout<<idx1<<" "<<idx2<<endl;
    swap(arr[idx1],arr[idx2+1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}