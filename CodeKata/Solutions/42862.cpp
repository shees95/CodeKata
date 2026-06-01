#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    // 겹치는 학생 제거
    vector<int> realLost;
    vector<int> realReserve;

    for (int l : lost)
    {
        if (find(reserve.begin(), reserve.end(), l) == reserve.end())
            realLost.push_back(l);
    }

    for (int r : reserve)
    {
        if (find(lost.begin(), lost.end(), r) == lost.end())
            realReserve.push_back(r);
    }

    // 기본적으로 체육복 있는 학생 수
    int answer = n - realLost.size();

    // 빌려주기
    for (int r : realReserve)
    {
        for (int i = 0; i < realLost.size(); i++)
        {
            if (realLost[i] == r - 1 || realLost[i] == r + 1)
            {
                answer++;
                realLost.erase(realLost.begin() + i);
                break;
            }
        }
    }

    return answer;
}