#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int count=0,zero=0;
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	      
	        
	    }
	     for(int k=0;k<n;k++){
	       if(a[k]<0){
	           count++;
	       }
	       if(a[k]==0){
	           zero++;
	       }
	        
	    }
	     
	    
	    if(zero>0){
	        cout<<"0";
	    }
	    
	     else if(count%2==1 && zero==0 ){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    
	}

	
	return 0;
}
// 3
// 1 9 8
// 4
// 2 -1 9 100
// 4
// 2 -1 0 100
// 4
// 2 -1 -1 100