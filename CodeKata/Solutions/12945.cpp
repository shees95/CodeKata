#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> value = {0, 1};
    
    while(value.size() <= n)
    {
        value.push_back((value[value.size() - 2] + value[value.size() - 1]) % 1234567);
    }
    
    answer = value[n];
    
    return answer;
}