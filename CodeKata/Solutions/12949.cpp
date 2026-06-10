#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(), vector<int>(arr2[0].size(), 0));
    
    for(int a1r=0; a1r<arr1.size(); a1r++)
    {
        for(int a2c=0; a2c<arr2[0].size(); a2c++)
        {
            
            for(int a2r=0;a2r<arr2.size();a2r++)
            {
                answer[a1r][a2c] += arr1[a1r][a2r] * arr2[a2r][a2c];
            }
        }
    }
    
    return answer;
}