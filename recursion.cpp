// recursion --> when a function calls itself until a specified condition is must


//infinite recursion


#include<bits/stdc++.h>
using namespace std;


void print(){
    cout<< 1 <<endl;
    print();
} 


int main(){
  print();

}

//stack overflow -->    when a program exhausts the stack memory allocated for function calls and local variables