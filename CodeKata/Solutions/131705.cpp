#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    // 3개 골라서 0 만들기
    // 중복 사용 가능
    
    // 투포인터..
    sort(number.begin(), number.end());
    
    // i는 0부터 최대 사이즈 - 2 크기만큼.
    for(int i=0;i<number.size() - 2;i++)
    {
        int left = i+1; // i 바로 오른쪽
        int right = number.size() - 1;  // 제일 오른쪽
        
        while(left < number.size() - 1)
        {
            int total = number[i] + number[left] + number[right];
            
            if(total == 0)
            {
                // 삼총사 발견
                answer++;
                left++; // 머무르지 않게 한 방향 밀어주기

            }
            else if(total > 0)
            {
                // right를 낮춰야한다.
                right--;
            }
            else
            {
                // left를 높여야한다.
                left++;
            }
        }
        
        
    }
    
    
    return answer;
}