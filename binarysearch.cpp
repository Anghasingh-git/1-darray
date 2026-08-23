  #include<iostream>
  using namespace std;
  int main(){
      int k,n,i;
      cout<<"size"<<endl;
       cin>>n;
       int arr[n];
     cout<<"elements"<<endl;
for(i=0;i<n;i++){
  cin>>arr[i];
      }
     cout<<"k"<<endl;
       cin>>k;
     int start=0;
    int end=n-1;
      while(start<=end){
      int mid=(start+end)/2;
       if(arr[mid]==k){    
           cout<<"the element"<<arr[mid]<<"the index"<<mid<<endl;
           break;
               }
      if(arr[mid]>k){
           end=mid-1;
          
      }
  if(arr[mid]<k){
       start=mid+1;    
  }
    }
     return 0;
 }