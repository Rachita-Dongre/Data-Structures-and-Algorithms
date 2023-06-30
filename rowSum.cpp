//calculate sum of each row
#include<iostream>

using namespace std;

void rowSum(int arr[][3], int n, int m){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    rowSum(arr, 3, 3);

    return 0;
}