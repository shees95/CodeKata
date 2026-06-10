#include <iostream>
#include <vector>

using namespace std;
int solution(vector<vector<string>> clothes);

int main()
{
    vector<vector<string>> arr1 = {{"yellow_hat", "headgear"}, 
                                {"blue_sunglasses", "eyewear"}, 
                                {"green_turban", "headgear"}
                                };
        
    cout << solution(arr1);
    return 0;
}
