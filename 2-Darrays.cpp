#include<iostream>

using namespace std;

int main(){

    int arr[3][4];
    //hard coding values
    int abc[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    //this way array only stores things row wise, if we wat to decide what goes into which row, we can use the following way":-
    int xyz[2][3]= {{1, 2, 3},{4, 5, 6}};

    //taking input
    //row wise
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
    //column wise
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[j][i];
        }
    }

    //output
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}