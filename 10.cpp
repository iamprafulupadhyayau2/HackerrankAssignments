//Grid Challenge
#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {
    // for(int i=0;i<grid.size();i++){
    //     cout<<grid[i]<<" ";;
    // }
    
    for(int i=0;i<grid.size();i++){
        sort(grid[i].begin(),grid[i].end());
    }
    int n=grid.size();int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]<=grid[i+1][j]){
                c++;
            }
        }
    } 
    cout<<c;
    if(c==n*(n-1)){
        return "YES";
    }
    

return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
