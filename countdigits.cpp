#include<iostream>
using namespace std;
void count(int n){
    int count=0;
    int lastdigit;
    while(n>0){
       lastdigit = n%10;
        count=count+1;
        n=n/10;
    }
    cout<<"count is:"<<count<<endl;

 
}
int main(){
    int n;
    cout<<" enter the value of n:"<<endl;
    cin>>n;
    count(n);
    return 0;
}
