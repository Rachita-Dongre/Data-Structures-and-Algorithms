#include<iostream>

using namespace std;

int main(){

    int arr[3]; //created uninitialized empty array of size 3;

    int abc[] = {1, 2, 3}; //created initialied array of size 3, no need to mention size ,since array is already containing the values, so it can be used to determine the size;

    int xyz[100] = {0}; //created array of size 100, all elements initialized with zero (can't initialize with any other number with this method);

    //to take input in an array:-
    for(int i = 0; i < 3; i++){
        cin>>arr[i];
    }
    cout<<"arr = "<<arr<<endl;

    return 0;
}