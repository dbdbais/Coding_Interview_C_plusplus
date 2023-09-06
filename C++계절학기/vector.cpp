#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> vec1(n);

    for(int i=0; i < n; ++i) {
        int colIndex;
        cin >> colIndex;
        vector<int> col;
        for (int j = 0; j < colIndex; j++) {
            int element;
            cin >> element;
            col.push_back(element);
        }
        vec1[i].insert(begin(vec1[i]), begin(col), end(col));
    }
        /*for (const auto& row : vec1) {
            for (const auto& element : row) {
                cout << element << " ";
            }
            cout << endl;
        }*/
        for (int i=0;i<m;i++){
            int l,j;
            cin >> l >> j;
            cout << vec1[l][j]<<endl;
        }

        return 0;

    }

