class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n = votes.size();
        int m = votes[0].size();

        // count[team][position]
        int count[26][26] = {};

        // Step 1: Count votes for each position
        for (const string& vote : votes) {
            for (int pos = 0; pos < m; pos++) {
                count[vote[pos] - 'A'][pos]++;
            }
        }

        // Step 2: Store all teams
        string teams = votes[0];

        // Step 3: Sort teams by ranking rules
        sort(teams.begin(), teams.end(), [&](char a, char b) {
            for (int pos = 0; pos < m; pos++) {
                int votesA = count[a - 'A'][pos];
                int votesB = count[b - 'A'][pos];

                if (votesA != votesB) {
                    return votesA > votesB;
                }
            }

            // All positions are tied
            return a < b;
        });

        return teams;
    }
};