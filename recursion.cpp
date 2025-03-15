// recursion --> when a function calls itself until a specified condition is must


//infinite recursion


#include<bits/stdc++.h>
using namespace std;

int min(int x, int y) {
    if (x > y) {
        return y;
    }
    return x;
}


int print(){
    cout<< "1" << "\n";
    return 2;
}

int main(){

    int x = min(0, print());
    cout << x << "\n";
    return 0; 
}