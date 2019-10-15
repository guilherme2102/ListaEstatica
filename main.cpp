#include <iostream>
using namespace std;
int main() {
    bool A,B,C;
    while(cin>>A>>B>>C) {
        cout << (char)((A==B&&B==C)?'*':'A'+(A==C)+2*(A==B))
             << endl;
    }
    return 0;
}
