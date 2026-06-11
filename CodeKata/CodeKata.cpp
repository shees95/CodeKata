#include <iostream>
#include <vector>

using namespace std;
vector<int> solution(vector<int> progresses, vector<int> speeds);

int main()
{
    vector<int> progresses = {95, 90, 99, 99, 80, 99};
    vector<int> seeds = {1, 1, 1, 1, 1, 1};
        
    for (auto& a : solution(progresses, seeds))
    {
        cout << a << " ";
    }
    return 0;
}
