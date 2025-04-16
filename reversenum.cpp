#include<iostream>
using namespace std;
void reverse(int n){
  int revN=0;
  int ld;
  while(n>0){
     ld = n%10;
    n=n/10;
    revN=(revN*10)+ld;
  }
  
  cout<<" reverse number is:"<< revN <<endl;
}
int main(){
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;
    reverse(n);
    
    return 0;

}