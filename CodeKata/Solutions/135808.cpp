#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end());
    
    int inbox = 0;
    for(int i=score.size() - 1;i>=0;i--)
    {
        inbox++;
        
        if(inbox == m)
        {
            inbox = 0;
            answer += score[i] * m;
        }
        
        
    }
    
    
    
    return answer;
}