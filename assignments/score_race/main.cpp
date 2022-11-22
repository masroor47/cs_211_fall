#include <iostream>
using namespace std;

// Input: String of uppercase chars indicating outcome of the race
// Output:
//   Number of Teams
//   Number of runners on a Team
//   Names of the teams (alphabertical) with team score
//   Name and Score of the Winning Team

// Keep taking input until 'done'
// if incorrect input, print error message and resume requesting input

// **********************

void printAnalysis(string str) {
    // first is the team member count, second is the score
    float map[26][2] = {0};
    int numTeams = 0;
    int numRunners = 0;

    // Filling the map with team runners and their scores.
    for (int i = 0; i < str.length(); i++) {
        // cout << "Checking " << str[i] << endl;
        if ((int)str[i] < 'A' || (int)str[i] > 'Z') {
            cout << "Only capital Letters A-Z accepted.\n";
            return;
        }
        int idx = str[i] - 'A';
        if (map[idx][0] == 0) {
            numTeams++;
        }

        // add 1 to team member count
        map[idx][0]++;
        // add the score
        map[idx][1] += i+1;
        
    }

    // validate if all teams have equal member count
    // if team count isn't equal among all, function returns
    numRunners = -1;
    float maxScore = INT_MAX;
    int maxScoreIndex = 0;
    for (int i = 0; i < 26; i++) {
        if (map[i][0] != 0) {
            if (numRunners == -1) {
                numRunners = map[i][0];
            } else if (map[i][0] != numRunners) {
                cout << "\nTeam member counts don't match!\n\n";
                return;
            }
            // cout << (char)(i+'A') << " dividing " << map[i][1] << " by " << numRunners << endl;
            map[i][1] = map[i][1] / numRunners;
            // cout << (char)(i+'A') << ": " << map[i][1] << endl;
            if (map[i][1] < maxScore) {
                maxScore = map[i][1];
                maxScoreIndex = i;
            }

        }
    }

    cout << "\n";
    cout << "There are " << numTeams << " teams.\n\n";
    cout << "Each team has " << numRunners << " runners.\n\n";
    cout << "Team    Score\n";
    for (int i = 0; i < 26; i++) {
        if (map[i][0] != 0) {
            cout << "  " << (char)(i+'A') << "    " << map[i][1] << endl;
        }
    }
    cout << "\nThe winning team is team " << (char)(maxScoreIndex+'A') << " with a score of " << maxScore << endl;

    cout << "\n-----------\n\n";

}



int main() {
    string race;
    cout << "Enter a race: ";
    cin >> race;

    while (race.compare("done")) {
        printAnalysis(race);

        cout << "Enter a new race: ";
        cin >> race;
    }
}
