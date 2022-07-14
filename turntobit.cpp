#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int answer = 0;
    int m = 1;

    while(n!=0){
        int bit = n & 1;
        answer = (bit * m) + answer;
        n = n >> 1;
        m = m * 10;

    }
    cout << answer << endl;


}