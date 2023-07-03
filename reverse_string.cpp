#include<iostream>

using namespace std;

void reverse(string &s, int i, int j){
    
    if(i > j){
        return ;
    }

    swap(s[i], s[j]);

    i++;
    j++;

    reverse(s, i, j);
    cout<<s<<endl;
}

int main(){

    string str = "abcdef";
    int i = 0;
    int j = str.length() - 1;
    cout<<str<<endl;

    reverse(str, i, j);

    return 0;
}