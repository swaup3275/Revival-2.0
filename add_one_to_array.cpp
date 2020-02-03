/* Author : Swarup Mahakud    */

#include <bits/stdc++.h>

#define f_r(i,n) for(int i=0;i<n;i++)
#define inp(i) scanf("%d",&i)
// #define oup(i) printf("%d",i)
#define vi vector<int>


//ios_base::sync_with_stdio(false);

using namespace std;

void add_one(vi &vec)
{
    //add 1 to the last digit and find array
    int n = vec.size();
    vec[n-1] = vec[n-1] + 1;
    int carry = vec[n-1]/10;
    vec[n-1] = vec[n-1]%10;    //when we need to cobert 10 to 0 or 20 to 0

    //traverse from second last digit

    for(int i=n-2;i>=0;i--)
    { 
        if(carry==1)
        {
        vec[i] = vec[i] + 1;
        carry = vec[i]/10;
        vec[i]=vec[i]%10;
        }
        
   }

   if(carry==1)
   {
       vec.insert(vec.begin(),1);
   }
     
}

int main()
{   vi para_vec;
    para_vec.push_back(1);
    para_vec.push_back(9);
    para_vec.push_back(9);
    para_vec.push_back(3);

    for(int i=0;i<para_vec.size();i++)
    cout<<para_vec[i];
    cout<<"\n";

    add_one(para_vec);

    for(int i=0;i<para_vec.size();i++)
    cout<<para_vec[i]<<",";

}



