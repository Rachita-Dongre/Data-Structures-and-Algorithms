#include<iostream>

using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    bool ans = isSorted(arr+1, size-1);
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    isSorted(arr, size);

    if(isSorted){
        cout<<"sorted"<<endl;
    } else {
        cout<<"not sorted"<<endl;
    }

    return 0;
}