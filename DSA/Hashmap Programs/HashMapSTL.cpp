/* 
 Today We will  learn about how Hashmap works  , and 
 what kind of functions are given in  hashmap of our  STL  . 
 Hashmap is very Important data structure . 
 And also we will see the  several functions of STL . 
  insert() it required the two argument . the key and data . 
  empty()  it returns 0 or 1 if it empty it returns 1 otherwise 0 . 
  erase() it required  one argument which is key which we want to delete . 
  size() it returns the total size of map. 
  find()  it  checks the particular data is present or not if it is not present it returns the iterator  of end() of map . 
  count() it  does also the same but it returns 0 or 1 if the data is present it returns 1 otherwise 0 . 
  begin() for  getting the first iterator of  key . 
  end()  for getting  the last iterator of key . 
  at()  this at function gives us key of value  where  it is inserted . 
   
  Note:-   when we insert data into  map it stores in assending order and once we  insert data into unordered_map it inserts randombly . 
 */ 
 #include<map>
 #include<unordered_map>
 #include<iostream>
 using namespace std; 
   int main(){

    pair<string,int> p; 
    // What types of method we have to insert data into map. 
    make_pair("Kundan",1);
    unordered_map<string, int> M; 
    // We can insert data into map using  pair , and we can also insert the data directly . 
    M.insert(p);
    M["Yogesh"]= 4; 
    M["Abhishek"]= 6; 
    M["Rajan"]= 9; 
    // this is M.size() it gives us the total size 
      cout<< M.size(); //  this will return 4
      cout<< endl;


      // here This empty ( ) function tells us that our map is empty or not . 
      cout<< M.empty(); // this will return 0 
      cout<< endl;


      // this count () function tells  the data that  you have passed is present or not . 
      // it always return 0 or 1 . 
      cout<< M.count("Raju")<< endl; // this will return 0  because if the key is not present in that case this count function returns the 0 otherwise 1 .
      //but it gets insert into map . 
      cout<< M.at("Yogesh"); // this at funtion() also gives the key where is data inserted . 
      cout<< endl;

      
      // Here I have found the iterator . 
       unordered_map<string, int> :: iterator i; 
       // Here I have called  function which  is important  it always returns the iterator  that is why I have  created iterator . 
      
        if(M.find("Kundan") == M.end()){ //  this will return true 
             cout<<"NO this is not present "<< endl;
        }
        else{
           
            cout<<" Yes this is present "<< endl;
        }
     // Erase the data 
     //  for erasing the particular  value I will call the function called erase("key");
      M.erase("Kundan");

     cout<<M.size();
      cout<< endl;

      // This is other method of insert into  map . 
      M.insert({"Rahul", 12});
      M.insert({"Ram", 11});
      M.insert({"Rupesh", 10});
      M.insert({"Raunak", 9});
      M.insert({"Rastogi", 17});
       cout<<" Now Here I will again print the size of map "<< endl;
       cout<<M.size(); // this will give 9 .
       cout<< endl; 
       

       // Now the question comes how to print the data of map very simple , just we have to use iterator . 
       i= M.begin(); // As we know that  i is iterator which  we have created it . 
        // I am going to print the  whole data of map along  with pair . 
         

         while(i!= M.end()){
            cout<<i->first<<" "<< i->second <<" "<< endl;
            i++;  
         }

         // we other uption to print the data of map which for each loop . 
         // let's see it 
         cout<< endl;
         for(auto i: M){
          cout<< i.first<<" "<< i.second<< " "<< endl;
           
         }





     return 0;
   }
