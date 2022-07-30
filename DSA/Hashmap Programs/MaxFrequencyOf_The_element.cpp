int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
     int ans=0; 
     int Maxfrq=0; 
    unordered_map<int,int> M; 
       for(int i=0; i<arr.size(); i++){
            M[arr[i]]++;
            Maxfrq= max(Maxfrq, M[arr[i]]);
       }
        
        for(int i=0; i<arr.size(); i++){
             if(M[arr[i]] == Maxfrq){
                 ans=arr[i];
                 break;
             }
        }
    return  ans ; 
    
}