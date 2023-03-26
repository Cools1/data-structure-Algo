#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;
    int	count =1;
	
    while(i<=n){
    	/* //space print 
    	 int space =n-1;
    	 while(space){
		 
    	 cout<<" ";
    	 space = space -1;*/
    
    // star * print
    int j=1;

    while(j<=i) {
    	cout<<"*";
    	count=count+1;
    	j=j+1;
	}

	
	cout<<endl;
	i=i+1;
}
return 0;
}

