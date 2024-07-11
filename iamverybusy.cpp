//greedy
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int max_activities(vector<pair<int, int>> activities) {
    sort(activities.begin(), activities.end(), compare);
    int max_activities = 0;
    int last_end_time = 0;
    for (pair<int, int> activity : activities) {
        if (activity.first >= last_end_time) {
            max_activities++;
            last_end_time = activity.second;
        }
    }
    return max_activities;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        vector<pair<int, int>> activities;
        for (int j = 0; j < N; j++) {
            int m, n;
            cin >> m >> n;
            activities.push_back({m, n});
        }
        cout << max_activities(activities) << endl;
    }
    return 0;
}
