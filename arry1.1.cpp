
// recursive method to reverse the array

/*
STEPS: 1. intailise start and end indexes as start = 0 and end = n-1
2. swap arr[start] with arr[end]
3. recursivly call reverse function for rest of the array
*/

#include <bits/stdc++.h>
using namespace std;
 
void reverseArray (int arr[] ,int start,int  end ){     // this function will revere the array

    if (start >= end)
    return ;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start +1 , end - 1);            // this will again call the reverse the funtion for next value i.e. spaw mext value of start index with before value of end value
}

void printArray(int arr[], int size)      // this will print the array 
{
    for( int i = 0; i <size; i++)
    cout<<arr[i]<<""<<endl;
}


int main(){

    int arr[] = { 1,2,3,4,5,6};  

    printArray(arr,6);

    reverseArray(arr,0,5);

    cout<<" reverse array is"<<endl;

    printArray(arr,6);

    return 0;

}