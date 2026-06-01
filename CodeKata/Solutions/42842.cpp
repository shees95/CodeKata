#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int cnt = 1;
    
    int r = 0;
    int c = 0;
    
    while(cnt <= sqrt(yellow))
    {
        // 약수일 때만
        if (yellow % cnt == 0)
        {
            r = cnt;
            c = yellow / cnt;
            
            if (brown == 2 * (r + c) + 4)
            {
                break;
            }
            
        }
        
        cnt++;
    }
    
    answer.push_back(c+2);
    answer.push_back(r+2);
    
    
    return answer;
}