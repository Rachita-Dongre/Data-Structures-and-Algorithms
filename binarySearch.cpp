#include<iostream>

using namespace std;

void print(int arr[],int m, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

bool binarySearch(int arr[], int s, int e, int k){
    cout<<"array : "<<endl<<endl;
    print(arr, s, e);
    cout<<endl;

    if(s > e){
        return false;
    }

    int mid = s + (e-s)/2;
    cout<<"mid: "<<mid<<endl<<endl;

    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){

        return binarySearch(arr, mid+1, e, k);
    
    } else {

        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int key = 10;

    if(binarySearch(arr, 0, size, key)){
        cout<<"found"<<endl;
    } else {
        cout<<"not found"<<endl;
    }

    return 0;
}