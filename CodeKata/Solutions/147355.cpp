#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    int p_len = p.length();
    
    for(int i=0; i<=t.length() - p_len; i++)
    {
        string t_val = t.substr(i, p_len);
        string p_val = p;
        
        if(t_val <= p_val) answer ++;
    }
    
    
    return answer;
}