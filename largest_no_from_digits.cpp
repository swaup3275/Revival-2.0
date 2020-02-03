/* Author : Swarup Mahakud    */

#include <bits/stdc++.h>

// #define f_r(i,n) for(int i=0;i<n;i++)
// #define inp(i) scanf("%d",&i)
// #define oup(i) printf("%d",i)
// #define vi vector<int>


//ios_base::sync_with_stdio(false);

using namespace std;

//write your own comparison functions, okay??
// X,Y try append one after other and compare. sounds cool honestly.

int my_cmp(string x,string y)
{
    string xy = x.append(y);
    string yx= y.append(x);

    //now just cmpare simple?
    // compare returns 0 if equal >0 if larger and similarly!

    return xy.compare(yx)>0 ? 1 :0;   //if xy>yx then return 1; 

}

void print_largest(vector<string> arr)
{
    sort(arr.begin(),arr.end(),my_cmp);
    for(int i=0;i<arr.size();i++)
    cout<<arr[i];
}

int main()
{
    vector<string> arr_sample;
    arr_sample.push_back("19");
    arr_sample.push_back("29");
    // arr_sample.push_back("2");
    // arr_sample.push_back("1");

    print_largest(arr_sample);
}

