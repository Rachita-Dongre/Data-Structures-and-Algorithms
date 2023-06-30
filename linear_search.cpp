/**
 * LINEAR SEARCH
 * 
 * An algorithm to search for an element in a given array.
 * We search line by line, traversing each element from the start(or from the end in some cases), hence the name linear search.
 * Time Complexity : O(n), since we're traversing through n elements.
 */

#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        } else {
            return -1;
        }
    }
}

int main(){

    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 7;

    linearSearch(arr, 10, key);

    return 0;
}