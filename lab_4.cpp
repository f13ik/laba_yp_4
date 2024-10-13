#include <iostream>
#include <vector>
#include <string>

using namespace std;

//функция не пригодилась :(
void bubbleSort(vector<int> lst, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (lst[j] < lst[j + 1]) {
                swap(lst[j], lst[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    scanf_s("%d", &n);
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        lst[i] = n - i;
    }
    int l1 = 0, l2 = 0, k1 = 0, k2 = 0;
    string s1{ "" }, s2{ "" };
    
    for (int i = 0; i < n; i++) {
        cout << lst[i] << endl;
        if (l1 <= l2) {
            l1 += lst[i];
            k1++;
            s1.append(to_string(lst[i]));
        }
        else {
            l2 += lst[i];
            k2++;
            s2.append(to_string(lst[i]) + ", ");
        }
            
    }
    cout << l1 << " " << l2 << endl;
    if (l1 == l2)
        cout << "YES" << endl << k1 << endl << s1 << endl << k2 << endl << s2 << endl;
    else
        cout << "NO";
}


