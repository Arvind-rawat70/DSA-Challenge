class Solution { 
public: 
    bool isPalindrome(int x)  
    { 
        if(x < 0) 
        { 
            return false; 
        } 

        long long ans = 0; 
        long long val = x; 

        while(x > 0) 
        { 
            long long  mod = x % 10; 
            ans = ans * 10 + mod; 
            x = x / 10; 
        } 

        if(ans == val) 
        { 
            return true; 
        } 

        return false; 
    } 
};