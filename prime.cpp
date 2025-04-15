#include<iostream>
using namespace std;
void prime(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        } 
    }
    if(count==2) {cout<<"prime no."<<endl;}
        else {cout<<"not a prime no.";}
}
int main(){
    int n;
    cout<<" enter the number to checked:";
    cin>>n;
    prime(n);
    return 0;
}