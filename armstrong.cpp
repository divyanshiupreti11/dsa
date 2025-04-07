#include<iostream>
using namespace std;
int countdigit(int n){
    int digit=0;
    while(n>0){
        n=n/10;
        digit++;
    }
    return digit;
}
int power(int ld, int tdigit){
    int result=1;
    for(int i=1;i<=tdigit;i++){
        result*=ld;
    }
    return result;
}
void armstrong(int n){
    int tdigit= countdigit(n);
    int ld;
    int x=n;
    int sum=0;
    while(n>0){
        ld=n%10;
        n=n/10;
        sum+= power(ld,tdigit);
    }
    if(sum==x) cout<<"yes a armstrong number";
    else cout<<"not a armstrong number";
}
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    armstrong(n);
    return 0;
}