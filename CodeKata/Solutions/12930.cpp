#include <string>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool mkCase = true;
    for(char c : s)
    {
        if(c == ' ') 
        {
            answer.push_back(c);
            mkCase = true;
            continue;
        }
        
        if(mkCase) answer.push_back(toupper(c));
        else answer.push_back(tolower(c));
        
        mkCase = !mkCase;
    }
    
    return answer;
}