#include<iostream>
#include<string>

using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int l, r, k;

    while (Q--) {
        cin >> l >> r >> k;
        for (int i = l; i <= r; i++) {
            
            S[i - 1] = 'a' + (S[i - 1] - 'a' + k) % 26;
            

        }
    }
    cout << S << endl;
    // ���ڴ��������Ĵ���
    return 0;
}