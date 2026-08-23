 #include<iostream>
 using namespace std;
 int main(){
     int i ,n ,sum,s;
     cout<<"number"<<endl;
     cin>>n;
     s=n;
     while(n!=1&&n!=4){
          int sum=0;
          
          while(n>0){
               int digit=n%10;
               sum=sum+digit*digit;              
               n=n/10;
          }
     n=sum;
     }
     if(n==1){
          cout<<"HAPPY NUMBER"<<s<<endl;
     }
     else{
          cout<<"NOT A HAPPY NUMBER"<<s<<endl;
     }
     
return 0;
 }