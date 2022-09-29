#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char eye1,eye2;
	cin>>eye1>>eye2;
	if(eye1=='R'&&(eye2=='B'||eye2=='G')){
	    cout<<'R';
	}
	else if(eye2=='R'&&(eye1=='B'||eye1=='G')){
	    cout<<'R';
	}
	else if(eye1=='B'&&eye2=='G'){
	    cout<<'B';
	}
	else if(eye2=='B'&&eye1=='G'){
	    cout<<'B';
	}
	else if(eye1=='R'&&eye2=='R'){
	    cout<<'R';
	}
	else if(eye1=='B'&&eye2=='B'){
	    cout<<'B';
	}
	else if(eye1=='G'&&eye2=='G'){
	    cout<<'G';
	}
	return 0;
}