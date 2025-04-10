#include<iostream>
using namespace std;
void divisor(int n){
    for( int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n ;
    cout<<"enter the number:"<<endl;
    cin>>n;
    divisor(n);
    return 0;
}