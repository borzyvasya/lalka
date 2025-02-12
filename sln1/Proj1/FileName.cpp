#include "std_lib_facilities.h"

constexpr int DAYS = 7;

void check(string day, vector<string> days, vector<int> req_days[DAYS], int value, int& rejected_count) {
    for (int i = 0; i < days.size(); ++i) {
        if (day == days[i]) {
            req_days[i].push_back(value);
            return;
        }
    }
    rejected_count++;
}

int main() {
	try {
        vector<int> days_of_week[DAYS];

        vector<string> valid_days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

        string day;
        int value = 0;
        int rejected_count = 0;

        while (cin >> day >> value) 
            check(day, valid_days, days_of_week, value, rejected_count);


        for (int i = 0; i < valid_days.size(); ++i) {
            cout << valid_days[i] << ": ";
            int sum = 0;
            for (int v : days_of_week[i]) {
                cout << v << " ";
                sum += v;
            }
            cout << " Sum: " << sum << endl;
        }

        cout << "Rejected values: " << rejected_count << endl;

        return 0;
	}
	catch (exception& e) {
		cout << e.what() << "\n";
		return 1;
	}
}