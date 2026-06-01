#include <string>
#include <vector>
#include <stack>
using namespace std;

bool checkClosed(string s)
{
    stack<int> stack;
    
    for (char& c : s)
    {
        if (c == '(') stack.push(1);
        if (c == '{') stack.push(2);
        if (c == '[') stack.push(3);
        
        if (!stack.empty())
        {
            if (c == ')' && stack.top() == 1) stack.pop();
            if (c == '}' && stack.top() == 2) stack.pop();
            if (c == ']' && stack.top() == 3) stack.pop();
        }
        else
        {
            if (c == ')' || c == '}' || c == ']') return false;
        }
        
        
    }
    
    if (stack.empty())
        return true;
    else
        return false;
}


int solution(string s) {
    int answer = 0;
    
    string s_tmp = s;
    for (int i=0;i<s.length();i++)
    {
        if (checkClosed(s_tmp)) answer ++;
        
        char tmp = s_tmp[0];
        s_tmp = s_tmp.substr(1, s_tmp.length() - 1);
        s_tmp.push_back(tmp);
    }

    
    return answer;
}