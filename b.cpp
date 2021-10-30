#include <bits/stdc++.h>
using namespace std;

void perm(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << s << endl;
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            perm(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[] = "ABC";
    int l = 0;
    int h = 2;
    perm(s, l, h);

    return 0;
}
