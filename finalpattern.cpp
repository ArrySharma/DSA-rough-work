#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i = 1;

    while(i<=n){

        // first triangle
        int count = 1;
        int j = n - i +1;
        while(j){
            cout<< " " << count;
            count++;
            j--;

        }

        // Second (Star) pattern
        int s = (2*i) - 2;
        while(s>=1){
            cout << " " << "X";
            s--;
        }

        // third pattern
        int k = n - i + 1;
        int counttwo = n - i + 1;
        while(k){
            cout<< " " << counttwo;
            counttwo--;
            k--;
        }



        cout<< endl;
        i++;







    }


}