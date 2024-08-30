//series sums
#include<iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cout<<"enter the no of element in array :- ";
	cin>>n;
	
	cout<<"enter the elents of array :- ";
	int nums[n];
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int max=-1;
	for(int k=0;k<n;k++){
		int sum=nums[k],x=1,j;
		for(int i=k+1;i<n;i+=x){
			if((i+x)<n){
				for(j=i;j<=x+i;j++){
					sum+=nums[j];
					//cout<<nums[j]<<" ";
				}
				//cout<<endl;
				x++;
			}
		}
		if(sum>max){
			max=sum;
		}
		//cout<<endl;
	}
	cout<<max;
	return 0;
}
