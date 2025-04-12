#include<iostream>
using namespace std;
void palindrome(int n ){
    int y=n;
    int revNum=0;
    int ld;
    while(n>0){
        ld=n%10;
        n=n/10;
        revNum=(revNum*10)+ld;
    }
   
    if(revNum==y){
        cout<<"yes a palindrome"<<endl;
    }
    else{cout<<"not a palindrome";}
}
int main(){
    #include<iostream>
using namespace std;
void prime(int n){
    int count =0;
    for(int i=0;i<n;i++){
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
