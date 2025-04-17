#include<iostream>
using namespace std;
bool checkpal(int i,string &s){
    if(i>=s.size() / 2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    checkpal(i+1,s);

}
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    checkpal(0,s);
    cout<< checkpal(0,s);
    return 0;
}