#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    
    bool isBubble = true;
    int i = 0;
    
    while(isBubble)
    {
        
        if (i >= (int)strings.size() - 1) {
            // 끝까지 다 검사했는데 더 이상 바꿀 게 없다면 종료
            break; 
        }
        
        if (strings[i][n] > strings[i + 1][n] || 
            (strings[i][n] == strings[i + 1][n] && strings[i] > strings[i + 1])) 
        {
            string t = strings[i];
            strings[i] = strings[i+1];
            strings[i+1] = t;
            
            i = 0;
            isBubble = true;
        }
        else
        {
            i++;
        }
        
    }
    
    answer = strings;
    
    return answer;
}