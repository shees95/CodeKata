#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int n = want.size();
    
    // 원하는 상품 목록을 map으로 구성
    unordered_map<string, int> need;
    for (int i = 0; i < n; i++) {
        need[want[i]] = number[i];
    }
    
    // 슬라이딩 윈도우 (크기 10)
    unordered_map<string, int> window;
    int m = discount.size();
    
    // 첫 윈도우 초기화
    for (int i = 0; i < 10; i++) {
        window[discount[i]]++;
    }
    
    // 첫 윈도우 검사
    auto check = [&]() -> bool {
        for (auto& p : need) {
            if (window[p.first] < p.second) return false;
        }
        return true;
    };
    
    if (check()) answer++;
    
    // 윈도우 슬라이드
    for (int i = 10; i < m; i++) {
        window[discount[i]]++;
        window[discount[i - 10]]--;
        if (check()) answer++;
    }
    
    return answer;
}