// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of elements in the array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//        cin>>arr[i];
//     }
//     int largest = INT_MIN;
//     for(int i =0;i<n;i++) //for array
//     {
//         if(arr[i]>largest)
//         largest = arr[i];
//     }
//     cout<< "The largest element in the array is: " << largest;
//     return 0;
// }

//smallest element in array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
       cin>>arr[i];
    }
    int smallest = INT_MAX;
    for(int i =0;i<n;i++) //for array
    {
        if(arr[i]<smallest)
        /*
    Compare each element with the current smallest value. 
    If the current element is smaller, update the smallest value.
        */
        smallest = arr[i];
    }
    cout<< "The smallest element in the array is: " << smallest;
    return 0;
}