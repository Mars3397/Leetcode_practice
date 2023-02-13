class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n1, n2;
        for (auto token : tokens) {
            if (token == "+") {
                n1 = st.top(); st.pop();
                n2 = st.top(); st.pop();
                st.push(n2 + n1);
            } else if (token == "-") {
                n1 = st.top(); st.pop();
                n2 = st.top(); st.pop();
                st.push(n2 - n1);
            } else if (token == "*") {
                n1 = st.top(); st.pop();
                n2 = st.top(); st.pop();
                st.push(n2 * n1);
            } else if (token == "/") {
                n1 = st.top(); st.pop();
                n2 = st.top(); st.pop();
                st.push(n2 / n1);
            } else {
                st.push(stoi(token));   
            }
        }
        return st.top();
    }
};