#include <iostream>
#include <vector>

using namespace std;
vector<int> solution(int n, long long left, long long right);

int main()
{
    for (auto& a : solution(3, 2, 5))
    {
        cout << a << " ";
    }
    return 0;
}
