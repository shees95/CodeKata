#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    // 1. 각 수포자의 패턴을 정의합니다.
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    // 2. 각 수포자별 맞힌 개수를 저장할 배열
    int spz[3] = {0, 0, 0};
    
    for(int i = 0; i < answers.size(); i++) {
        // % 연산자를 이용해 패턴을 무한 반복시킵니다.
        if(answers[i] == p1[i % p1.size()]) spz[0]++;
        if(answers[i] == p2[i % p2.size()]) spz[1]++;
        if(answers[i] == p3[i % p3.size()]) spz[2]++;
    }
    
    // 3. 가장 많이 맞힌 개수를 찾습니다.
    int max_score = max({spz[0], spz[1], spz[2]});
    
    // 4. 최대 점수와 같은 점수를 가진 수포자를 결과에 넣습니다.
    for(int i = 0; i < 3; i++) {
        if(spz[i] == max_score) {
            answer.push_back(i + 1); // 수포자는 1, 2, 3번임
        }
    }
    
    return answer;
}

