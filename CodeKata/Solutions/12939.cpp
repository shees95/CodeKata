#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    vector<int> v;
    int i=0;
    while(s[i] != '\0')
    {
        if(s[i] != ' ')
        {
            tmp += s[i];
            
        }
        else
        {
            v.push_back(stoi(tmp));
            tmp = "";
        }
        
        i++;
    }
    
    v.push_back(stoi(tmp));
    
    sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
    
    answer += to_string(v[0]) + " " + to_string(v[v.size() - 1]);
    
    return answer;
}