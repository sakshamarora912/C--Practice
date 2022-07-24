#include <iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){return false;}
    }return true;
}
int main(){
   int b; cin>>b;
   for(int i=2;i<=b;i++){
       if(isPrime(i)){
        int sum=0;
        int total=sum+i
        cout<<total<<endl;}
   }
}
