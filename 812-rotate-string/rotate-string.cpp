class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
        {
            return true;
        }
        char start = goal[0];
        int pos = 0;
        for(int i = 0; i<goal.size(); i++)
        {
            if(start==s[i])
            {
              string temp = s;
              int pos = i;
              reverse(temp.begin(),temp.begin()+pos);
              reverse(temp.begin()+pos, temp.end());
              reverse(temp.begin(), temp.end());
              if(temp==goal) return true;
            }
        }
        return false;
    }
};