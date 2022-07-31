/* Let's talk about a very  interesting question based on string . In this question   you will be given
   a string size of 1 to 500 . You have to tell the  each and every particular character how many times
   present in the string . 
   For better understanding , Let's see the Test cases  :- 
   
     I/P:- string ans="vvvyyyyyyvvvvvvrryyyyyyuuuuuccccccrrrrr";
     O/P:-  string Anwer="v3y6v6r2y6u5c6r5";
     I/P:- string ans="yyyyygggnnnnnnnniiiidddddfffffeeee";
     O/P:- string Anwer="y5g3n8i4d5f5e4";
     I/P:- string ans="vvaaaaaaaaaaacccxxxxxvvvvddddd";
     O/P:-  string Anwer="v2a11c3x5v4d5";
     I/P:-  string ans="ffffaaaaarrrrrhhhhiyjjjnniii";
     O/p:-   string Anwer="f4a5r5h4iyj3n2i3";
     I/P:- string ans="zzpmmllllooooooaaaaaahhppppvhfqtbbjjjjmmmmm";
     O/P:- string Anwer="z2pm2l4o6a6h2p4vhfqtb2j4m5";
  
   */
#include<bits/stdc++.h>
using namespace std; 
string compressTheString(string &s)
{
	// Write your code here
        string ans=""; // this will be my answe string 
        vector<char>b;  // Here I have taken a vector  in  which I  will store the character . 
     
     char ch= s[0];  // First we will have to take first character of string  .  
      for(int i=0; i<s.size(); i++){
          if(ch==s[i]){  // we will campare with  next  to each character if it is equal then we  will add the data into  the vector . 
                b.push_back(s[i]);
          }
          else  // Here When it will  be false then  first of all   we will find the size of vector if it greater than one 
		  //that means we will add it character in our answer and also  the size of vector and after that we clear all the data of vector . 
          {  
              if(b.size()!=1 &&  b.size()!=0){
             ans.push_back(ch);
             char d= '0'+ b.size();
             int  num= d-'0'; 
              if(num>=9) // Here I have mentioned this condition why because ,
	      {      //if size of vector might greter than 9 in that condition we will take one string and the we will convert the number into string 
		      //and then we will add into our answer vector . 
              
                string temp= to_string(num);
                
                for(int i=0; i< temp.size(); i++){
                    ans.push_back(temp[i]);
                    
                }
              }
              else 

             ans.push_back(d);
             b.clear(); // we will clear the content of vector 
             ch= s[i];
             b.push_back(ch);
              }
              else
                {
                  ans.push_back(ch);
                  ch=s[i];
                  b.clear(); // Here also we will  erase the content of vector .
                  b.push_back(ch);
                }
          }
             
      
      }
        if(b.empty()==false)  // after the  ending the loop we will again check if vector is empty if it empty then we will nothiing do 
	{ // if it is not empty then we will find the  size of vector and then also  check  it is smaller than 10 in that case we will add size of vector in our answer string  . 
           // if the size of vector is greater than 9 in that case we will take one string and  convert the size into  string and then we will add 
		//in our answer strign that's all . 
          
            char d= '0'+ b.size();
              int num= d-'0'; 
              if(num==1)
              {
                 char ch= b[0];
                  ans.push_back(ch);


              }
              else if(num<=9){
                char ch= b[0];
                  ans.push_back(ch);
                   ans.push_back(d);

              }
                else {
                   string temp= to_string(num);
                     for(int i=0; i<temp.size(); i++){
                          ans.push_back(temp[i]);
                     }
                      char ch= b[0];
                      ans.push_back(ch);
                }
            
             
          }
   
      
    return ans;
}

int main(){
   string ans;
    char  data ='0'+ 3 ;
    string b="vvaaaaaaaaaaacccxxxxxvvvvddddd";  // this is only for  checking purpose . 
    
      ans=  compressTheString(b);
   
     for(auto i : ans) // for each loop  for print the anwser . 
       cout<< i; 

    return 0; 
}
