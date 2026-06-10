#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    map<string, int> cases;
    
    for (auto& cloth : clothes)
    {
        string clothtype = cloth[1];
        
        if (cases.find(clothtype) == cases.end())
        {
            cases.emplace(clothtype, 1);
        }
        else
        {
            cases.at(clothtype) ++;
        }
        
    }
    
    for (auto& cnt : cases)
    {
        answer *= (cnt.second + 1);
    }
    
    
    
    return answer - 1;
}