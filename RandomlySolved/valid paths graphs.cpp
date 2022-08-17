#include<bits/stdc++.h>
using namespace std;
int grid[50][50]={{0}};
int dfs(int xs,int ys,int x,int y)
{
    if(xs==x&&ys==y)
    return 1;

    if(grid[ys][xs+1]==0&&xs+1<=x)
     {
        grid[ys][xs+1]=1;
         dfs(xs+1,ys,x,y);
        grid[ys][xs+1]=0;
     }
     if(grid[ys][xs-1]==0&&xs-1>=1)
     {
        grid[ys][xs-1]=1;
         dfs(xs-1,ys,x,y);
        grid[ys][xs-1]=0;
     }
      if(grid[ys+1][xs]==0&&ys+1<=y)
     {
        grid[ys+1][xs]=1;
         dfs(xs,ys+1,x,y);
        grid[ys+1][xs]=0;
     }
      if(grid[ys-1][xs]==0&&ys-1>=1)
     {
        grid[ys-1][xs]=1;
         dfs(xs,ys-1,x,y);
        grid[ys-1][xs]=0;
     }

      if(grid[ys+1][xs+1]==0&&xs+1<=x&&ys+1<=y)
     {
        grid[ys+1][xs+1]=1;
        dfs(xs+1,ys+1,x,y);
        grid[ys+1][xs+1]=0;
     }
     if(grid[ys-1][xs-1]==0&&xs-1>=1&&ys-1>=1)
     {
        grid[ys-1][xs-1]=1;
         dfs(xs-1,ys-1,x,y);
        grid[ys-1][xs-1]=0;
     }
      if(grid[ys-1][xs+1]==0&&ys-1>=1&&xs+1<=x)
     {
        grid[ys-1][xs+1]=1;
         dfs(xs,ys-1,x,y);
        grid[ys-1][xs+1]=0;
     }
      if(grid[ys+1][xs-1]==0&&ys+1<=y&&xs-1>=1)
     {
        grid[ys+1][xs-1]=1;
        dfs(xs-1,ys+1,x,y);
        grid[ys+1][xs-1]=0;
     }

    return -1;
}
string solve(int x, int y, int n, int r, vector<int> &Cx, vector<int> &Cy)
{
 if(n==0)return "YES\n";
 if(r==0)return "YES\n";
 for(int i=0;i<n;i++)
 {
   int xc=Cx[i];
   int yc=Cy[i];
   grid[yc][xc]=-1;

   for(int j=1;j<=r;j++)
   if(yc-j>=1)
    {

       grid[yc-j][xc]=-1;
    }

   for(int j=1;j<=r;j++)
   if(yc+j<=y)
    {
       grid[yc+j][xc]=-1;
    }

   for(int j=1;j<=r;j++)
   if(xc-j>=1)
    {
       grid[yc][xc-j]=-1;
    }

   for(int j=1;j<=r;j++)
    if(xc+j<=x)
    {
       grid[yc][xc+j]=-1;
    }

    //for diagonals
    for(int j=1;j<=r;j++)
    if(sqrt(2)*j<=r&&xc+j<=x&&yc+j<=y)
    {
       grid[yc+j][xc+j]=-1;
    }
    //
    for(int j=1;j<=r;j++)
    if(sqrt(2)*j<=r&&yc+j<=y&&xc-j>=1)
    {
       grid[yc+j][xc-j]=-1;
    }
    //
    for(int j=1;j<=r;j++)
    if(sqrt(2)*j<=r&&yc-j>=1&&xc+j<=x)
    {
       grid[yc-j][xc+j]=-1;
    }
    //
    for(int j=1;j<=r;j++)
    if(sqrt(2)*j<=r&&xc-j>=1&&yc-j>=1)
    {
       grid[yc-j][xc-j]=-1;
    }

 }
 for(int i=1;i<=x;i++)
 {
     for(int j=1;j<=y;j++)
     {
         cout<<grid[j][i]<<" ";
     }
     cout<<"\n";
 }
 int result=dfs(0,0,x,y);
 if(result==-1)
 return "NO\n";
 else return "YES\n";
}
int main()
{
    int x,y,n,r;
    cin>>x>>y>>n>>r;
    vector<int> Cx,Cy;
    for(int i=0;i<n;i++)
    {
        int A,B;
        cin>>A>>B;
        Cx.push_back(A);
        Cy.push_back(B);
    }
    string result=solve(x,y,n,r,Cx,Cy);
    cout<<"result "<<result<<"\n";
}

A : 47
B : 26
C : 2
D : 8
E : [ 45, 40 ]
F : [ 17, 1 ]
