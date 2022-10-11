#include<iostream>
using namespace std;

int main(){
int t,n,i,j,x,y;
cin>>t;
while(t!=0){
 
 cin>>n;
 int temp=0;
 if(n==2||n==7||n==0){
   cout<<"YES"<<endl;
   temp=1;
 }
 
 
 if(n%2==0){
   x=n/2;
   y=x;
}
 else
 {
   x=n/2;
   y=x+1;
  
 }
 
 for(i=x,j=y;i>=0;i--,j++){
 
  if((i%2==0&&j%7==0&&temp==0)||(i%7==0&&j%2==0&&temp==0)){
       cout<<"YES"<<endl;
       break;
  }
  else if(i==0&&temp==0){
      cout<<"NO"<<endl;
      break;
  }
    
 
 
 
 }

 
 t--;


}

}
