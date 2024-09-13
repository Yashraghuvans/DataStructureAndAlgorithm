#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int moves = 0;
        for(int i=0; i<seats.size(); i++)
            moves += abs(seats[i] - students[i]);
        
        return moves;
    }
};

int main() {
    int num_seats, num_students;

    
    cout << "Enter the number of seats: ";
    cin >> num_seats;
    cout << "Enter the number of students: ";
    cin >> num_students;

    
    if (num_seats <= 0 || num_students <= 0 || num_seats != num_students) {
        cerr << "Error: Invalid input. Number of seats and students must be positive and equal." << endl;
        return 1;
    }
    vector<int> seats(num_seats);
    cout << "Enter the desired seat positions for students (space-separated): ";
    for (int i = 0; i < num_seats; ++i) {
        cin >> seats[i];
    }

    vector<int> students(num_students);
    cout << "Enter the student IDs (space-separated): ";
    for (int i = 0; i < num_students; ++i) {
        cin >> students[i];
    }

    Solution s;
    int min_moves = s.minMovesToSeat(seats, students);

    cout << "Minimum number of moves required to seat all students: " << min_moves << endl;

    return 0;
}
