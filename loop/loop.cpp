#include<iostream>
using namespace std;
int main()
{
     int i,j;
     for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
        {
            if(i==3)
            break;
            cout<<i<<j<<endl;
        }
     }
}

/*11
12
13
14
15
21
22
23
24
25
41
42
43
44
45
51
52
53
54
55
PS C:\Users\DELL\OneDrive\Desktop\c++> */