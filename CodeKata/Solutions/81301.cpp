#include <string>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    map<string, int> english;
    
    english.emplace("zero" ,0);
    english.emplace("one"  ,1);
    english.emplace("two"  ,2);
    english.emplace("three",3);
    english.emplace("four" ,4);
    english.emplace("five" ,5);
    english.emplace("six"  ,6);
    english.emplace("seven",7);
    english.emplace("eight",8);
    english.emplace("nine" ,9);
    
    
    string eng = "";
    for(char& c : s)
    {
        // 숫자 바로 추가
        if(isdigit(c)) 
        {
            answer = answer * 10 + static_cast<int>(c - '0');
            continue;
        }
        
        // 문자열 변환 추가
        eng.push_back(c);
        auto it = english.find(eng);
        if(it != english.end()) 
        {
            answer = answer * 10 + english.at(eng);
            eng = "";
        }
    }
    
    return answer;
}