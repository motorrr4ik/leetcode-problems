#include<vector>
#include<iostream>

using namespace std;


class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        dfs(n, k, 1, current);
        return result;
    }
private:
    void dfs(const int& n, const int&k, int index, vector<int>& current){
        if(current.size() == k){
            result.push_back(current);
            return;  
        }
        for(int i = index; i <= n; ++i){
            current.push_back(i);
            dfs(n, k, i+1, current);
            current.pop_back();
        }

    }
};

int main(){
    Solution sol;
    int n = 4;
    int k = 2;
    vector<vector<int>> res;
    res = sol.combine(n, k);
    for(auto& a: res){
        cout << "[";
        for(auto& b: a){
            cout << b << ",";
        }
        cout << "]";
    }
    cout << endl;
    return 0;
}