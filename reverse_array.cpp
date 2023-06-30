#include<iostream>

using namespace std;

void reverse(int arr[], int n){
    int i = 0;
    int j = n-1;

    while(i <= j){
        swap(arr[i], arr[j]);
    }
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    reverse(arr, 5);

    printArray(arr, 5);

    return 0;
}