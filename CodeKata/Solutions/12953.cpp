#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int GCD(int a, int b)
{
    while(b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    
    return a;
}

int solution(vector<int> arr) {
    int answer = 1;
    
    sort(arr.begin(), arr.end());
    
    // 최대공약수 구하기
    int aGCD = 1;
    for(int a : arr)
    {
        aGCD = GCD(answer, a);
        answer *= a / aGCD;
    }
    
    return answer;
}