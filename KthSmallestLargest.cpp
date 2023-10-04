

//Find the "Kth" max and min element of an array 
//Set-14


/* Submitted by: Mayur Srivastav
   University Roll no: 2200290130109
   Branch: Information Technology
   Section: B
*/


#include <bits/stdc++.h>
using namespace std;

//initialized a void function (function with argument and no return value).
void kthLargest(int arr[], int k, int n){

    //Used STL to sort array from 0 index to n-1 index.
    sort(arr,arr+n);

    //Print the kth largest number.
    cout<<arr[n-k];
}

void kthSmallest(int arr[], int k, int n){

    //Used STL to sort array from 0 index to n-1 index.
    sort(arr,arr+n);
     
    //Print the kth smallest number.
    cout<<arr[k-1];
}

int main(){

    //Initializing an array of sufficient size and variable integers k and n.
    int arr[100], k,n;

    //Taking the value of k in the register.
    cout<<"Enter the value of k:";
    cin>>k;

    //Taking the value of n in the register.
    cout<<"Enter the number of elements in the array:";
    cin>>n;

    //Taking the value of array of each index upto n.
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<i+1<<":";
        cin>>arr[i];
    }

    //Called a function 'kthLargest' and 'kthSmallest' by value.
    kthLargest(arr,k,n);
    kthSmallest(arr,k,n);

    return 0;
}