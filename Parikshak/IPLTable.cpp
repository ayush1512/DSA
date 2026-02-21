#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int no = 4;
    vector<string> teams = {'A', 'B', 'C', 'D'};
    
    int mat = 5;
    map<string, int> wins;
    map<string, double> runs;
    
    for (int i = 0; i < mat; i++) {
        string team1, team2;
        double score1, score2;
        cin >> team1 >> score1 >> team2 >> score2;
        
        if (score1 > score2) {
            wins[team1] += 2;
        } else if (score1 == score2) {
            wins[team1]++;
            wins[team2]++;
        } else {
            wins[team2] += 2;
        }
        
        runs[team1] += score1;
        runs[team2] += score2;
    }
    
    vector<pair<string, pair<int, double>>> results;
    for (const auto& team : teams) {
        results.push_back({team, {wins[team], runs[team]}});
    }
    
    sort(results.begin(), results.end(), [](const auto& a, const auto& b) {
        if (a.second.first != b.second.first)
            return a.second.first > b.second.first;
        return a.second.second > b.second.second;
    });
    
    for (const auto& [team, data] : results) {
        cout << team << " " << data.first << " " 
             << fixed << setprecision(2) << data.second << "\n";
    }
    
    return 0;
}
