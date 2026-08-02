class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char , int > freq1 ;
          unordered_map<char , int > freq2 ;

          for(char c : ransomNote ){
            freq1[c]++; 

          }
           for(char c : magazine  ){
            freq2[c]++; 
            


          }

           
           bool ans = true ; 

          for(char c : ransomNote ){

            if(freq1[c] > freq2[c] ){
                return false ; 
            }
          }


       return ans ; 
        
    }
};