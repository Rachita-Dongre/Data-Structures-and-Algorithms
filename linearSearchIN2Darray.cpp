#include<iostream>

using namespace std;

bool isPresent(int arr[][3], int target, int n, int m){

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(arr[i][j] == target){

                return 1;

            } else {

                return 0;

            }
        }
    }
}

int main(){

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" "<<endl;
        }
    }

    bool present = isPresent(arr,5, 3, 3);

    if(present){

        cout<<"target is present";

    } else {

        cout<<"not present";

    }

    return 0;
}