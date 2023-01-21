#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int res = 1;
    while(N) {
        int v;
        cin >> v;
        if(v == 1) res = -1;
        N--;
    }
    cout << res << endl;
    return 0;
}
