/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==3)
            break;
            cout<<i<<j<<endl;
        }
    }
}*/
/*11
12
21
22
31
32
41
42
51
52
PS C:\Users\DELL\OneDrive\Desktop\c++> */

/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<i<<j<<endl;
            if(j==3)
            break;
        }
    }
}
*/
/*11
12
13
21
22
23
31
32
33
41
42
43
51
52
53
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<i<<j<<endl;
            if(i==3)
            break;
        }
    }
}*/
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
31
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
PS C:\Users\DELL\OneDrive\Desktop\c++>*/

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
         if(i==3)
            break;
        for(j=1;j<=5;j++)
        {
            if(j==3)
            break;
            cout<<i<<j<<endl;
        }
    }
}

/*11
12
21
22
PS C:\Users\DELL\OneDrive\Desktop\c++> */