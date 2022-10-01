#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,rem,count=0;
	    cin>>a>>b;
	    int sum=a+b;
	    while(sum!=0){
	        rem=sum%10;
	        if(rem==0){
	            count=count+6;
	        }
	        else if(rem==1){
	            count =count+2;
	        }
	        else if(rem==2){
	            count =count+5;
	        }
	        else if(rem==3){
	            count =count+5;
	        }
	        else if(rem==4){
	            count =count+4;
	        }
	        else if(rem==5){
	            count =count+5;
	        }
	        else if(rem==6){
	            count =count+6;
	        }
	        else if(rem==7){
	            count =count+3;
	        }
	        else if(rem==8){
	            count =count+7;
	        }
	        else if(rem==9){
	            count =count+6;
	        }
	        sum=sum/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
