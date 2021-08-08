#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/1511/A

int main() {
    int t=0, n=0, r=0;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>n;
        int downVotesServerA = 0;
        int upVotesServerA =0;
        int downVotesServerB = 0;
        int upVotesServerB =0;
        for(int j=0; j<n; j++){
            cin>>r;
            if(r ==1){
                upVotesServerA++;
            }else if(r==2){
                downVotesServerB++;
            }else if(r==3){
                upVotesServerA++;    
            }
        }
        cout<<upVotesServerA+upVotesServerB<<endl;
    }
	   
	return 0;
}