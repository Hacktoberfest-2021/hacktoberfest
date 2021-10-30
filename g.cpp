#include <bits/stdc++.h>
using namespace std;

int validation(char *name)
{
    int i;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= 'A' && name[i] <= 'Z') && !(name[i] >= '0' && name[i] <= '9'))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char *name = "Deep123";

    if (validation(name) == 1)
    {
        cout << "Valid string" << endl;
    }
    else
    {
        cout << "Invalid string" << endl;
    }

    return 0;
}
