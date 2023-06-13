#include <set>

#include <algorithm>

void solve(vector<int> &candidates, int target, set<vector<int>> &ans, vector<int> v, int index)

{

    if (index == candidates.size())

    {

        int sum = 0;

        for (int i = 0; i < v.size(); i++)

        {

            sum += v[i];
        }

        if (sum == target)

        {

            sort(v.begin(), v.end());

            ans.insert(v);
        }

        return;
    }

    v.push_back(candidates[index]);

    solve(candidates, target, ans, v, index + 1);

    v.pop_back();

    solve(candidates, target, ans, v, index + 1);
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)

{

    set<vector<int>> ans;

    vector<int> v;

    int index = 0;

    solve(arr, target, ans, v, index);

    vector<vector<int>> answer;

    for (auto it : ans)

    {

        answer.push_back(it);
    }

    return answer;
}