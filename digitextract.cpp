#include<iostream>
using namespace std;
void extract(int n){
    while(n>0){
       int lastdigit =n%10;
       cout<<"the digits are:"<< lastdigit <<endl;
       n=n/10;
    }
   
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    extract(n);
    return 0;
}