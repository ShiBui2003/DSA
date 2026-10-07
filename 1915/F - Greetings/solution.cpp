#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> people(n);
        for (int i = 0; i < n; i++) {
            cin >> people[i].first >> people[i].second;
        }
        
        // Sort people by their starting position
        sort(people.begin(), people.end());
        
        long long greetings = 0;
        
        // Use merge sort to count inversions in ending positions
        // Two people greet if their segments cross: ai < aj but bi > bj
        vector<int> endings;
        for (int i = 0; i < n; i++) {
            endings.push_back(people[i].second);
        }
        
        // Count inversions using merge sort approach
        function<long long(int, int)> mergeSort = [&](int left, int right) -> long long {
            if (left >= right) return 0;
            
            int mid = (left + right) / 2;
            long long inv = mergeSort(left, mid) + mergeSort(mid + 1, right);
            
            vector<int> temp(right - left + 1);
            int i = left, j = mid + 1, k = 0;
            
            while (i <= mid && j <= right) {
                if (endings[i] <= endings[j]) {
                    temp[k++] = endings[i++];
                } else {
                    temp[k++] = endings[j++];
                    inv += (mid - i + 1); // Count inversions
                }
            }
            
            while (i <= mid) temp[k++] = endings[i++];
            while (j <= right) temp[k++] = endings[j++];
            
            for (int i = 0; i < k; i++) {
                endings[left + i] = temp[i];
            }
            
            return inv;
        };
        
        greetings = mergeSort(0, n - 1);
        cout << greetings << "
";
    }
    
    return 0;
}