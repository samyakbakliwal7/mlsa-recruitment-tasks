#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main() 
{
     
   int n ;
   cin>>n;
   int A[1000],B[1000];
   vector<int> C;
   
   for(int k=0;k<n;k++)
   {
       cin>>A[k];
   }
   for(int k=0;k<n;k++)
   {
       cin>>B[k];
   }
   
   for(int i=0;i<n;i++)
   {
       
       if(A[i]!=B[i])
       {
           C.push_back(i);
           
       }
   }
   
   string s;
   
   int y=0;
   for(int i=0;i<C.size()-1;i++)
   {
       if(C[i+1]-C[i]==1)
       {
           y++;
       }
       
       
   }
   int z=0;
   
   if(y==C.size()-1)
   {
   
   
   
   for(int j=0;j<C.size()-1;j++)
   {
       if(A[C[j+1]]-B[C[j+1]] == A[C[j]]-B[C[j]])
       {
          z++;
          
       }
       else
       {
           cout<<"NO"<<endl;
           break;
       }
   }
   
   }
   
   else{
       cout<<"NO"<<endl;
   }



if(z==C.size()-1)
{
    cout<<"YES"<<endl;
}








































    
}
    

