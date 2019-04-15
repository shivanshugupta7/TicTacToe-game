#include<iostream>
#include<cstdlib>
using namespace std;
void matrix(char a[])
{
    cout<<"\t\t\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t\t\t  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  \n";
    cout<<"\t\t\t\t\t\t_____ _____ _____\n";
    cout<<"\t\t\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t\t\t  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  \n";
    cout<<"\t\t\t\t\t\t_____ _____ _____\n";
    cout<<"\t\t\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t\t\t  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  \n";
    cout<<"\t\t\t\t\t\t     |     |     \n";

}
int checksumx(char a[])
{
    if((a[0]=='x' & a[1]=='x' & a[2]=='x')||(a[0]=='x'& a[3]=='x'& a[6]=='x')||(a[0]=='x'& a[4]=='x'& a[8]=='x')||(a[1]=='x'& a[4]=='x'& a[7]=='x')||(a[2]=='x'& a[5]=='x'& a[8]=='x')||(a[2]=='x'& a[4]=='x'& a[6]=='x'))
    {
        return 1;
    }
    else
        return 0;
}
int checksumo(char a[])
{
    if((a[0]=='0' & a[1]=='0' & a[2]=='0')||(a[0]=='0'& a[3]=='0'& a[6]=='0')||(a[0]=='0'& a[4]=='0'& a[8]=='0')||(a[1]=='0'& a[4]=='0'& a[7]=='0')||(a[2]=='0'& a[5]=='0'& a[8]=='0')||(a[2]=='0'& a[4]=='0'& a[6]=='0'))
    {
        return 1;
    }
    else
        return 0;
}
main()
{
    char a[9];
    int result;
    for(int i=0;i<9;i++)  a[i]=i+1+'0';
    cout<<"\t\t\t\t\t    Welcome to Tic Tac Toe GAME\n\n\n\tFor PLAYER 1 - X\n\tFor PLAYER 2 - 0\n\n";
    matrix(a);
    char ok;
    cout<<"Do you want to play the Game - (y/n)";
    cin>>ok;
    system("cls");
    if(ok=='y')
    {
       int i=0,x;
        cout<<"\t\t\t\t\t\t Game has BEGUN \n\n\n\n";
        while(i!=8)
        {
            matrix(a);
            if((i+2)%2==0)
            {
                cout<<"Player 1 --- ";
                cin>>x;
                system("cls");
                if(a[x-1]=='0' || a[x-1]=='x'|| a[x-1]=='X')
                {
                    cout<<"This position "<<x<<" has Already taken\n\n";
                    i=i-2;
                    continue;
                }
                else
                {
                    a[x-1]='x';
                    if(i>=4)
                     {
                    result=checksumx(a);
                    if(result){ cout<<"\t\t\t\t\tPLAYER 1 WON .\n\n\t\t\t\t\t CONGRATULATIONS!!!!";  break;}

                      }
                      i++;
                }
            }
            else
            {
                cout<<"Player 2 --- ";
                cin>>x;
                 system("cls");
             if(a[x-1]=='0' || a[x-1]=='x'|| a[x-1]=='X')
                {
                    cout<<"The position "<<x<<" has Already taken\n\n";
                    i=i-2;
                    continue;
                }
              else
              {
                a[x-1]='O';
                if(i>=4)
                {
                    result=checksumo(a);
                    if(result)  {cout<<"\t\t\t\t\t    PLAYER 1 WON .\n\n\t\t\t\t\t CONGRATULATIONS!!!!"; break;}
                }
                i++;
              }
            }
        }
         cout<<"\nThanks For Playing the GAME\nDeveloped By SHIVANSHU GUPTA\n\n";
    }
    else{
        cout<<"\n\n\t\t\t\t     \\\\\\\\\\\  /////\n\n";
    }
}
