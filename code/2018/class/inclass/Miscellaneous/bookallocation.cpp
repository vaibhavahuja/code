#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

bool simulate(vi& books, int nBooks, int nStudents, int guess) {
    int curStudent = 1;
    int curPagesAllocated = 0;

    for (auto book : books) {
        if (book + curPagesAllocated <= guess) {
            curPagesAllocated += book;
        }
        else {
            ++curStudent;
            if (curStudent > nStudents || book > guess) {
                return false;
            }
            curPagesAllocated = book;
        }
    }
    return true;
}


int minPages(int nBooks, int t, vi& books) {
    // sort(books.begin(), books.end());
    int nStudents = nBooks;
    int totalPages = accumulate(books.begin(), books.end(), 0);

    int bestAns = totalPages;

    int low = 0;
    int high = totalPages;

    while (low <= high) {
        int mid = (low + high) / 2; // guess
        bool success = simulate(books, nBooks, nStudents, mid);
        if (success) {
            bestAns = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return bestAns*t;
}

int main() {
    int n;
    cin >> n;
    vi v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int nStudents;
    cin >> nStudents;
    int t;
    cin>>t;
    int ans = minPages(nStudents, t, v);
    cout << ans;
}
