#include<iostream>

using namespace std;

void merge(int *arr, int s, int e){

    int mid = s+(e-s)/2;

    //creating new temporary arrays dynamically bcoz the array length is variable & known at runtime.
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying elements from main array to new array

    //left array
    int k = s; // main array's index
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    //right array
    k = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    //merging both the arrays
    int index1 = 0;
    int index2 = 0;
    k = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }

    //if any array is longer than the other

    //if first is longer than second
    while(index1 < len1){
        arr[k++] = first[index1++];
    }

    //if second is longer than first
    while(index2 < len2){
        arr[k++] = second[index2++];
    }

    //releasing the memory
    delete [] first;
    delete [] second;
}

void mergeSort(int *arr, int s, int e){

    //base case(we reached single element arrays)
    if(s > e){
        return;
    }

    int mid = s+(e-s)/2;

    //sorting left part
    mergeSort(arr, s, mid);

    //sorting right part
    mergeSort(arr, mid+1, e);

    //merging both arrays
    merge(arr, s, e);
}

int main(){

    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;

    mergeSort(arr, 0, n-1);
    
    //printing hte sorted array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}