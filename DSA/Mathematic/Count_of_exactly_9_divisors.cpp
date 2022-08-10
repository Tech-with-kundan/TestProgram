/*

Find the count of numbers less than equal to N having exactly 9 divisors.

Example 1:

Input:
N = 100
Output:
2
Explanation:
The two numbers which have 
exactly 9 divisors are 36 and 100.
Example 2:

Input:
N = 1000
Output:
8 
Explanation:
The numbers are:
36 100 196 225 256 441 484 676
*/
// we are going to apply prim sieve method techniue . 
#include<iostream>
#include<vector>
#include<math.h>
using namespace std ; 
using ll= long long int ; 
    int  count9divisors(long long int N){
      ll limited= sqrt(N) +1; 
       vector<ll> s (limited+1 , 1); 
       vector<ll> prime; 
       // Here Now I am going to use the  prime sieve algorithm . 
       for(ll i=2; i<=limited; i++){
            if(s[i]){
                prime.push_back(i);
                for( ll j=2*i ;j<=limited; j+=i)
                       s[j]= 0; 
            }
       }
       int c=0; 
       // cout<< " what happened "; 
       for(int i=0; i< prime. size(); i++)
         cout<< prime[i]<<" ";
         int n= prime.size();
       // Now we have found the  prime numbers between the  given numbers . 
       for(int i=0; i<n; i++){
              if(pow(prime[i], 8)<=N)
                  c++;
                 // cout<< prime[i]<<" "; 
             for(int j=i+1; j<n; j++){
                 if(pow(prime[j],2) * pow(prime[i], 2)<=N)
                       c++;
             }
             
       }
        return c; 
       
    }
         int main(){
            long long int num; 
            cout<<" Enter the number ";
            cin>> num; 
             cout<<count9divisors(num)<< endl; 
             return 0; 
         }