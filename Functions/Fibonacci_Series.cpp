#include<iostream>
using namespace std;

bool checkMember(int n){ 

    int a=1,b=1,c;
    while(a<=n)
    { 
        c=a+b;
        b=a;
a=c;
        
     if(a==n){
         return true;
     }    
         
    }
    return false;
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}


