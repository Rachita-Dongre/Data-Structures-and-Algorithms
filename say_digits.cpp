#include<iostream>

using namespace std;

void sayDigits(int n, string arr[]){

    //base case(when there is single digit in number)
    if(n == 0){
        return;
    }

    //taking out individual digits from the number and updating the number
    int digit = n % 10;
    n = n/10;

    //recursive call
    sayDigits(n, arr);

    cout<<arr[digit]<<" "<<endl;

}

int main(){
    string mappingArray[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n = 123;

    sayDigits(n, mappingArray);

    return 0;
}