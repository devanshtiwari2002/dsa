//  reverse the array

// iteative method ( loop )
// 1. initialise start and end as start = 0 and end = n-1
// 2. in a loop swap arr[start] with arr[end] and chnage the start and end as follows 
//  start = start + 1, end = end - 1


#include <bits/stdc++.h>
using namespace std;


// function to reverese the array 
void reverseAraay ( int arr[], int start, int end ){      

    while ( start < end )   
    {
        int temp = arr[start];              // intaliese the (start) in temp 
        arr[start] = arr[end];              // end -> start
        arr[end] = temp;                    // temp -> end
        start ++ ;                          // start countert toward right
        end -- ;                            // end counter towards left

    }
}


// function to print array 

void printArray( int arr[] , int size){     

    for (int i = 0; i < size; i++)
    
    cout<<arr[i]<<","<<endl;

}


int main(){

int arr[] = {1,2,3,4,5,6};

int n = sizeof(arr)/sizeof(arr[0]);


printArray(arr,n);         // arr and size is passed to function

reverseAraay(arr,0,n-1);     // arr , start index , end index passed to function

cout<<" reverse array is "<<endl;

printArray(arr,n);       // again calling print function with new arr 



    return 0;
}