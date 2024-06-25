#include<stdio.h>

void merge(int arr[] , int low,int mid,int high){
	int n1=mid-low+1;
	int n2=high-mid;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++){
		left[i]=arr[low+i];
	}
	for(int i=0;i<n2;i++){
		right[i]=arr[mid+1+i];
	}
	int i=0,j=0,k=low;
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
		}else{
			arr[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=right[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i] );
	}
	printf("\n");
}
int main(){
	int size = 7;
	int arr[7] = {50,30,80,20,10,15,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Initial array elements :");
	printArray(arr,n);
	printf("After sorting :");
	mergeSort(arr,0,n-1);
	printArray(arr,n);

}