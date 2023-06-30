//calculate he sum of all rows and find the largest of them

#include <iostream>

using namespace std;

int largestRowSum(int arr[][3], int n, int m){
    int maxi = -1;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
        }
    }
    return maxi;
}

int main(){

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout<<"largest row sum is : "<<largestRowSum(arr, 3, 3);

    return 0;
}
