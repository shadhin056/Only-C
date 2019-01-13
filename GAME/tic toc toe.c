#include <stdio.h>
int main()
{
    int b[3][3]={0},i,j,k,c;
    system("color F2");
    printf("\t\t*****>Wel come to Tic Toc Toe Game<*****\n");
    printf("\t\tßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n\n\n");
    for(i=0; i<9; i++)
    {
        printf("\t\t%d |%d  |%d              Location: 0 0 | 0 1 | 0 2\n",b[0][0],b[0][1],b[0][2]);
        printf("\t\t--+---+--\t\t\t----+-----+----\n");
        printf("\t\t%d |%d  |%d\t\t\t1 0 | 1 1 | 1 2\n",b[1][0],b[1][1],b[1][2]);
        printf("\t\t--+---+--\t\t\t----+-----+----\n");
        printf("\t\t%d |%d  |%d\t\t\t2 0 | 2 1 | 2 2\n",b[2][0],b[2][1],b[2][2]);
        if(i%2==0)
        {
            printf("\n\nPlayers 1's Turn\n\nGive your location= ");
            scanf("%d %d",&j,&k);
            if(b[j][k]==0)
            {
                b[j][k]=1;
            }
            else
            {
                printf("\nThis location has been used by your opponent\nPlease restart your game\n\n");
                break;
            }

            printf("\n");
        }
        else
        {
           printf("\n\nPlayers 2's Turn\n\nGive your location= ");
           scanf("%d %d",&j,&k);
           if(b[j][k]==0)
            {
                b[j][k]=2;
            }
            else
            {
                printf("\nThis location has been used by your opponent\nPlease restart your game\n\n");
                break;
            }
           printf("\n");
        }
     if( (b[0][0]==1 && b[0][1]==1 && b[0][2]==1) ||
       (b[1][0]==1 && b[1][1]==1 && b[1][2]==1) ||
       (b[2][0]==1 && b[2][1]==1 && b[2][2]==1) ||
       (b[0][0]==1 && b[1][0]==1 && b[2][0]==1) ||
       (b[0][1]==1 && b[1][1]==1 && b[2][1]==1) ||
       (b[0][2]==1 && b[1][2]==1 && b[2][2]==1) ||
       (b[0][0]==1 && b[1][1]==1 && b[2][2]==1) ||
       (b[0][2]==1 && b[1][1]==1 && b[2][0]==1) )

    {
        printf("\n\n****Player 1 Wins****\n\n");
        c=1;
        break;
    }
    else if( (b[0][0]==2 && b[0][1]==2 && b[0][2]==2) ||
       (b[1][0]==2 && b[1][1]==2 && b[1][2]==2) ||
       (b[2][0]==2 && b[2][1]==2 && b[2][2]==2) ||
       (b[0][0]==2 && b[1][0]==2 && b[2][0]==2) ||
       (b[0][1]==2 && b[1][1]==2 && b[2][1]==2) ||
       (b[0][2]==2 && b[1][2]==2 && b[2][2]==2) ||
       (b[0][0]==2 && b[1][1]==2 && b[2][2]==2) ||
       (b[0][2]==2 && b[1][1]==2 && b[2][0]==2) )
       {
           printf("\n\n****Player 2 Wins*****\n\n");
           c=1;
           break;
       }
    }
    if(c!=1)
    {
        printf("\n\t\t***The match is Draw***");
    }
    getch();
    return 0;
}
