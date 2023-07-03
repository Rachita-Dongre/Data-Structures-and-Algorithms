#include<iostream>

using namespace std;

int arrSum(int arr[], int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int remaining = arrSum(arr+1, n-1);
    return arr[0] + remaining;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int sum = arrSum(arr, 5);
    cout<<"sum = "<<sum<<endl;
}