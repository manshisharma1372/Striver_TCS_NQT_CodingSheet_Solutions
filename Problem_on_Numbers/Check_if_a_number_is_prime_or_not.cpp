#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cout<<"Enter a Number: ";
cin>>n;
bool flag=true;
for(int i=2;i*i<n;i++){
    if(n%i==0){
        flag=false;
        break;
    }
 
}
if(flag==true){
    cout<<"Number is Prime"<<endl;
}
else{
 cout<<"Number is not prime"<<endl;
}
   

return 0;
}