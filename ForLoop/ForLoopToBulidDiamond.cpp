//
// Created by karrysong on 2018/10/15.
//
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Build
{
public:
    int n;
    cout << "Please input height: " << endl;
    cin >> n;

    // Get to top is n rows
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n - i - 1; j ++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 2 * i; j ++)
        {
            //Each line's first is * and the others is space, make empty inside. So is bottom part.
            if (j == 0 or j == 2 * i)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }

    //Get below is n - 1 row
    for(int i = 0; i < n -1; i ++)
    {
        for(int j; j <= i; j ++)
        {
            cout << " ";
        }
        for(int j = 0; j <= 2 * (n - i - 2); j++)
        {
            if(j == 0 or j == 2 * (n - i - 2))
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}