#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer(1, 0);
    
    int date = 0;
    int a_index = 0;
    for (int i=0;i<progresses.size();i++)
    {
        int p = progresses[i];
        int s = speeds[i];
        
        // 첫 date 계산
        if (date == 0) date += (int)ceil((100 - p) / (float)s);
        
        int current_p = p + s * date;
        
        
        
        // 끝난 프로그래스 당일 등록
        if (current_p >= 100)
        {
            answer[a_index] ++;
            continue;
        }
        // 일정 체크 후 뒤에 등록
        else
        {
            date += (int)ceil((100 - current_p) / (float)s);
            answer.push_back(1);
            a_index++;
        }
        
        
    }
    
    return answer;
}