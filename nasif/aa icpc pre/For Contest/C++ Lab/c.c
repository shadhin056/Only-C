#include<stdio.h>
#include<string.h>

#define READ(file) freopen(file, "r", stdin);
#define WRITE(file) freopen(file, "w", stdout);

int main()
{
    READ("input.txt");
    //WRITE("output.txt");

//    int t, tt;
//    cin >> tt;


//    while(1)
//    {
//        int n;
//        cin >> n;
//        if(n==0)break;
//
//    }

//    int n = 'a';
//    cout << n << endl;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isdigit(ch))
        {
            //ch+=1;
            printf("%c\n",ch);
        }
        //else if (ch>='A'&&ch<='Z')
        else if (isupper(ch))
        {
            //ch-=54;
            printf("%c\n",ch);
            //cout << ch-54 << endl;
        }
        else
        {
//            ch-=54;
            printf("here\n");
            //cout << ch-60 << endl;
        }

    }



    return 0;
}



/*

Sample input

3
5
A


Sample output

4
6
11

*/

