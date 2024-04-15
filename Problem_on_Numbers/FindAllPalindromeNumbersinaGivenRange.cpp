#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int n){
    int temp=n;
    int rev=0;
    while(temp>0){
        int lastDigit=temp%10;
        rev=rev * 10+lastDigit;
        temp=temp/10;
    }
    if(n==rev){
        return true;
    }
    return false;
}
int main() {
int mini=10;
int maxi= 50;
for(int i=mini; i<=maxi; i++){
    if(ispalindrome(i)){
        cout<<i<<" ";
    }
}
return 0;
}