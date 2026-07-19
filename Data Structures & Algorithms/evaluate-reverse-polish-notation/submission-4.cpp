#include <vector>
#include <string>
#include <stack>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        // Use a set for O(1) lookups of operators
        static const unordered_set<string> ops = {"+", "-", "*", "/"};

        for (const string& token : tokens) {
            // Check if token is an operator
            if (ops.count(token)) {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                // Use the first character to determine the operation
                // This avoids string comparisons in the switch
                switch (token[0]) {
                    case '+': st.push(a + b); break;
                    case '-': st.push(a - b); break;
                    case '*': st.push(a * b); break;
                    case '/': st.push(a / b); break; // Integer division
                }
            } else {
                // It's a number
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};