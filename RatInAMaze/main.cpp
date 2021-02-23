#include <iostream>

using namespace std;

bool RatInAMaze(char maze[10][10], int sol[][10],int i,int j,int m,int n)
{
    if(i==m&&j==n)
    {
        sol[i][j]=1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(i>m||j>n)
    {
        return false;
    }
    if(maze[i][j]=='X')
    {
        return false;
    }
    sol[i][j]=1;
    bool isright=RatInAMaze(maze,sol,i,j+1,m,n);
    bool isdown=RatInAMaze(maze,sol,i+1,j,m,n);
    sol[i][j]=0; //backtracking
    if(isright||isdown)
    {
        return true;
    }
    return false;
}
int main()
{
    char maze[10][10]={"0000","00X0","000X","0X00"};
    int sol[10][10]={0},m=4,n=4;
    bool out=RatInAMaze(maze,sol,0,0,m-1,n-1);
    if(out==false)
    {
        cout<<"Path does not exist"<<endl;
    }
    return 0;
}
