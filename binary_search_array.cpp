#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key);

int main(){
    int n;
cout<<"how many do you want to input in array : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n){
        for(int i=0;i<(n-counter);i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
int key;
cout<<"which number do you want to search in array : ";
cin>>key;


cout<<"The index of the searching element in array is ";
cout<<binarysearch(arr,n,key)<<endl;

}

int binarysearch(int arr[], int n, int key){
    int start=0;
    int end=n;
    while(start<=n){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

}