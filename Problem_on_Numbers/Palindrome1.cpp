#include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cout<<"Enter a Number";
 cin>>n;
 int temp=n;
 int reverse=0;
 while(temp>0){
    int lastDigit=temp%10;
    reverse=reverse*10+lastDigit;
    temp=temp/10;
 }
 if(reverse==n){
    cout<<"Number is a Palindrome"<<endl;
 }
 else{
    cout<<"Number is not a Palindrome"<<endl;
 }
return 0;
}