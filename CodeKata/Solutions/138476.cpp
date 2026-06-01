#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<pair<int, int>> cnt;
    
    // sort(tangerine.begin(), tangerine.end());
    
    for (auto& t : tangerine)
    {
        if (find_if(cnt.begin(), cnt.end(), [t](pair<int, int>& p) { return p.first == t; }) == cnt.end())
        {
            cnt.push_back({t, 1});
        }
        else
        {
            find_if(cnt.begin(), cnt.end(), [t](pair<int, int>& p) { return p.first == t; })->second ++;
        }
    }
    
    sort(cnt.begin(), cnt.end(), [](pair<int, int> a, pair<int, int> b) {return a.second > b.second;});
    
    int inbox = 0;
    for (auto& t : cnt)
    {
        inbox += t.second;
        answer++;
        if (inbox >= k) break;
        
    }
    
    return answer;
}