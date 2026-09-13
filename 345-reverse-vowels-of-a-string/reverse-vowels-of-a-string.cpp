class Solution {
public:
    string reverseVowels(string s) 
    {
       string vowels = "aeiouAEIOU";
       int i = 0;
       int j = s.length()-1;
       while(i<=j)
       {
         bool left = vowels.find(s[i])!= string::npos;
         bool right = vowels.find(s[j])!=string::npos;
         if(left&&right)
         {
            swap(s[i], s[j]);
            i++;
            j--;
         }
         else if(!left && right)
         {
            i++;
         }
         else if(left && !right)
         {
            j--;
         }
         else{
            i++;
            j--;
         }
       }
       return s;
    }
};