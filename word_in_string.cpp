/* Author : Swarup Mahakud    */

#include <bits/stdc++.h>

// #define f_r(i,n) for(int i=0;i<n;i++)
// #define inp(i) scanf("%d",&i)
// #define oup(i) printf("%d",i)
// #define vi vector<int>


//ios_base::sync_with_stdio(false);

using namespace std;

//case sensitive one

bool isPresent(string sentence,string word)
{
    stringstream s(sentence);    //to bfeak the sentence into words
    string temp;

    while(s>>temp)
    {

        //compare current word and target word
        if(temp.compare(word)==0){

            return true;
        }

    }

    return false;
}

int main()
{
    cout<<isPresent("can you find me","fiNd");
    cout<<endl;

}

