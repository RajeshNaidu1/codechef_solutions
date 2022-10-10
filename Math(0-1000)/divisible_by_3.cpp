#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,count=0;
	    cin>>a>>b;
	    if(a==b){
	        cout<<"1"<<endl;
	    }
	    else if(a%3==0||b%3==0){
	        cout<<count<<endl;
	    }
	    else{
	        while(a%3!=0&&b%3!=0){
	            if(b>a){
	                b=b-a;
	                count++;
	            }
	            else if(a>b){
	                a=a-b;
	                count++;
	            }
	            else if(a==b){
	                count++;
	                break;
	            }
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
