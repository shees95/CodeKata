#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    
    set<int> result;
    
    // 개수
    int index = 0;
    for (auto& e : elements)
    {
        int sum = 0;
        for (int i=0; i<elements.size(); i++)
        {
            sum += elements[(i + index) % elements.size()];
            result.emplace(sum);
        }
        index++;
    }
    
    answer = result.size();
    
    return answer;
}