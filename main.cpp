#include <iostream>
using namespace std;

int main() {
    int n=0, a=1, b=0,c=0;

    cin >> n;
    
        cout << a << endl;
        for (c = 0; c < n; c++) {
            c = b + a;
            cout << c << endl;
            b = a;
            a = c;
        }
 
return 0;

}
