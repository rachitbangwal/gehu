//perform binary search for a array.
#include<iostream>
int main(){
	int n=0;
	cout<<"Enter the no of elements in array :- "<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array :- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//bubble sort
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]<arr[j]){
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	
	//printing sorted array
	cout<<"sorted array is :- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
	int el=0;
	cout<<endl<<Enter the element to search in array :- ";
	cin>>el;
	
	//binary search
	int mid=(n-1)/2;
	int start=0;
	int end=n;
	for(int i=0;i<n;i++){
		if(el<arr[mid]){
			end=mid;
			mid=(end-start)/2;
		}
		else if(el>arr[mid]){
			start=mid;
			mid=(end+start)/2;
		}
		else{
			cout<<"element found at index :- "<<mid+1;
			return 0;
		}
	}
	printf("element not found!!");
	return 0;
}
