#include<iostream>
using namespace std;
struct pair{
	
	int min;
    int max;
    	
};
pair getminmax(int arr[],int n)
{
   struct pair minmax:
   	int i;
   	if(n==1){
   		minmax.min=arr[0];
   		minmax.max=arr[0];
   		return minmax;
   		
	   }
	   if(arr[0]>arr[1])
	   {
	   	minmax.min=arr[1];
   		minmax.max=arr[0];
	   }
	   else{
	
	   minmax.min=arr[0];
   		minmax.max=arr[1];
   	}
   	for(i=2;i<n;i++)
   	{
   		if(arr[i]>minmax.max)
	   
	   	minmax.min=arr[i];
	   	
	   	else if(arr[i]<minmax.min)
   		minmax.min=arr[i];
   	}
   	return minmax
	
}
int main(){
	int arr[]={1000,11,445,1,330,3000};
	int arr_size=6;
	struct pair minmax = getminmax(arr,arr_size);
	cout<<"minimum element is"<<minmax.min<<endl;
	cout<<"maximum element is"<<minmax.max<<endl;
	return 0;
	
}
