#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    a--;
    b--;
    
    while(n/2 != 0)
    {
        if(a == b)
        {
            break;
        }
        else
        {
            n /= 2;
            a /= 2;
            b /= 2;
            
            answer ++;
        }
    }
    
    
    return answer;
}