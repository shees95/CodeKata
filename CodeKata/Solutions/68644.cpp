#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> sum;
    
    sort(numbers.begin(), numbers.end());
    
    for(int i=0; i < numbers.size(); i++)
    {
        for(int j=numbers.size() - 1; j>i; j--)
        {
            int plus = numbers[i] + numbers[j];
            sum.emplace(plus);
        }
    }
    
    for(auto& s : sum)
    {
        answer.push_back(s);
    }
    
    return answer;
}