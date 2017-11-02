#include <bits/stdc++.h>

using namespace std;

int main()
{
    char name[10][20], tname[10][20], temp[20];
    int i, j, n;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the names: ";
    for (i = 0; i < n; i++)
    {
        cin >> name[i];
        strcpy(tname[i], name[i]);
    }
    for (i = 0; i < n - 1 ; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\n----------------------------------------\n");
    printf("               Sorted names\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        cout << "\t" << name[i] << endl;
    }
    printf("------------------------------------------\n");
}
