class Solution {
public:
   vector<string> result;
   void comb(int ind, string digits, string temp, unordered_map<char,string>map)
   {
   
    if(ind>=digits.length())
    {
        result.push_back(temp);
        return;
    }
    char ch = digits[ind];
    string str = map[ch];
    for(int i = 0; i<str.length();i++)
    {
        temp.push_back(str[i]);
        comb(ind+1,digits,temp,map);
        temp.pop_back();
    }


   }
    vector<string> letterCombinations(string digits) 
    {
        if(digits.length()==0)
        {
            return {};
        }
        unordered_map<char,string>map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";
        string temp ="";
        comb(0,digits,temp,map);
        return result;
    }
};