// Using Stack

class Solution {
public:
    bool isValid(string s) {
            stack<char> se;
    char x;

    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '['
            || s[i] == '{')
        {
            // Push the element in the stack
            se.push(s[i]);
            continue;
        }
 .
        if (se.empty())
            return false;

        switch (s[i]) {
        case ')':

            // Store the top element in a
            x = se.top();
            se.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = se.top();
            se.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = se.top();
            se.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }

    // Check Empty Stack
    return (se.empty());
}

};
