#include <bits/stdc++.h>
using namespace std;

// Author: Angel Gabriel Rodriguez
// Date: August / 07 / 2021
// https://codeforces.com/problemset/problem/1328/B

const long long int maxn = 900000000;

long long int  positions(long long int n){
   
   long long int a,b,c,d,e,f,aux,i,l = 0;
   double s,r;;
    
   aux = ((1+sqrt(1+4*2*(n-1)))/2);
   s = ((1+sqrt(1+4*2*(n-1)))/2);
   r = s - aux;
   if(r == 0.0)
      return  0;
    
   while(--n){
      aux = ((1+sqrt(1+4*2*(n-1)))/2);
      s = ((1+sqrt(1+4*2*(n-1)))/2);
      r = s - aux;
      l++;
      if(r == 0.0)
         return l;       
    }
}

long long int segundaPosition(long long int n ){
   long long int aux1;
   n--;
   aux1 = ((1+sqrt(1+4*2*n))/2);
   return aux1;
}

int main() {
   
   int i,k,l,p,q,n,cases;
   vector <char>str;
 
   cin >> cases;
   while(cases --){
      
      cin >> n >> k;
      str.resize(n);
      p = positions(k); 
      q = segundaPosition(k);
      
      for(i = 0; i <n; i ++){
         if(i == p || i == q)
            str[i] = 'b';
         else
            str[i] = 'a';
      }
        
      reverse(str.begin(),str.end());
      for(auto rosa: str)
         cout << rosa;
      printf("\n");
      str.clear();
   }
   return 0;
}
	
