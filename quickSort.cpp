#include<iostream>

using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];
    int count = 0;

    //finding count
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = s + count;

    //placing the pivot at it's right place
    swap(arr[pivotIndex], arr[s]);

    //processing the left and right part
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void quickSort(int arr[], int s, int e){

    //base case
    if(s >= e){
        return;
    }

    int p = partition(arr, s, e);

    //sorting left part
    quickSort(arr, s, p-1);

    //sorting right part
    quickSort(arr, p+1, e);

    for(int i = 0; i < e; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

}

int main(){

    int arr[10] = {2, 4, 1, 5, 7, 10, 8, 3, 9, 6};
    int n = 10;

    quickSort(arr, 0, n-1);

    

    return 0;
}