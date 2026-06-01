#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    int convertbyte = 0;
    int deletedzero = 0;
    
    while(s != "1")
    {
        int len = 0;
        
        for(char& c : s)
        {
            if(c == '1') len++;
            else deletedzero++;
        }
        
        s = "";
        
        while(len != 0)
        {
            s = to_string(len % 2) + s;
            len /= 2;
        }
        
        convertbyte++;
    }
    
    answer.push_back(convertbyte);
    answer.push_back(deletedzero);
    
    
    return answer;
}