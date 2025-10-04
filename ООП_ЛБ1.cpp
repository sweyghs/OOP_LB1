#include <iostream>
using namespace std;

struct TimePair {
    int first;
    int second;

    void Init(int h, int m) {
        first = h >= 0 ? h : 0;
        second = m >= 0 ? m : 0;
    }

    void Read() {
        cout << "Hours: ";
        cin >> first;
        cout << "Minutes: ";
        cin >> second;
        Init(first, second);
    }

    void Display() {
        cout << first << " Години " << second << " Хвилини " << endl;
    }

    int minutes() {
        return first * 60 + second;
    }
};

int main() {
    TimePair t;
    t.Read();
    t.Display();
    cout << "Total minutes: " << t.minutes() << endl;
    return 0;
}