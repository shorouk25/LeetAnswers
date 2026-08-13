class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        stack<char> elements;
        char check;
        for(int i=0; i<size; i++){
            if(s[i] =='[' || s[i] == '(' || s[i] == '{'){
                elements.push(s[i]);
            }
            else{
                if(elements.empty()) {
                    return false;
                }
                check = elements.top();
                if(check == '(' && s[i] == ')'){
                    elements.pop();
                }
                else if(check == '[' && s[i] == ']'){
                    elements.pop();
                }
                else if(check == '{' && s[i] == '}'){
                    elements.pop();
                }
                else{
                    return false;
                }
            }
        }
        return elements.empty();
    }
};