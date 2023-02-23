#include <iostream>
#include "ModulesTkachenko.h"
#include <iomanip>

using namespace std;

int main()
{
    float input[5][3] =
    {
        {2,3,5},
        {0,0,3},
        {1,2.5,-4},
        {0.5,-11,6},
        {14,-2,5.25}
    };

    float output[5] =
    {
        -718.064,
        -78.2988,
        -49.9839,
        -1984.86,
        -151637
    };

    cout<<"input\t"<<setw(15)<<"output\t"<<setw(15)<<"case status"<<endl;
    for (int i = 0; i < 5; i++)
    {
        if (s_calculation(input[i][0], input[i][1], input[i][2]) == output[i])
        {
            cout<<s_calculation(input[i][0], input[i][1], input[i][2])<<setw(15)<<output[i]<<setw(15)<<"failed"<<endl;
        }
        else
        {
            cout<<s_calculation(input[i][0], input[i][1], input[i][2])<<setw(15)<<output[i]<<setw(15)<<"passed"<<endl;
        }
    }
    return 0;
}
