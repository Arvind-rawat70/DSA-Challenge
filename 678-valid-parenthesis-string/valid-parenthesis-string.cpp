class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left;   // stores indices of '('
        stack<int> star;   // stores indices of '*'

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(') {
                left.push(i);
            }
            else if (ch == '*') {
                star.push(i);
            }
            else { // ch == ')'
                if (!left.empty()) {
                    left.pop();      // Match with '('
                }
                else if (!star.empty()) {
                    star.pop();      // Use '*' as '('
                }
                else {
                    return false;    
                }
            }
        }
        while (!left.empty() && !star.empty()) {
            if (left.top() > star.top()) {
                return false;        
            }

            left.pop();
            star.pop();
        }

        return left.empty();
    }
};