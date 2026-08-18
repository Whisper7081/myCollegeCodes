/*棋盘上 A 点有一个过河卒，需要走到目标 B 点。卒行走的规则：可以向下、或者向右。同时在棋盘上 C 点有一个对方的马，该马所在的点和所有跳跃一步可达的点称为对方马的控制点。因此称之为“马拦过河卒”。

棋盘用坐标表示，A 点 (0,0)、B 点 (n,m)，同样马的位置坐标是需要给出的。



现在要求你计算出卒从 A 点（不经过马的控制点）能够到达 B 点的路径的条数，假设马的位置是固定不动的，并不是卒走一步马走一步。

输入格式
一行四个正整数，分别表示 B 点坐标和马的坐标。

输出格式
一个整数，表示所有的路径条数。

输入输出样例
输入 #1复制

6 6 3 3
输出 #1复制

6
说明/提示
对于 100% 的数据，1≤n,m≤20，0≤ 马的坐标 ≤20。

保证起点不是马的控制点。

【题目来源】

NOIP 2002 普及组第四题*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p,q
    cin>>n>>m>>p>>q;
    long long dp[25][25];
    int dx[]={-2,-2,-1,-1,1,1,2,2};
    int dy[]={-1,1,-2,2,-2,2,-1,1};
    
    bool contral[25][25];
    
    for (int i = 0;i<8;i++)
    {
        int nx;
        int ny;
        nx = p + dx[i];
        ny = q + dy[i];
        if(nx >= 0 && nx <= n && ny >= 0 && ny <= m)
        {
            contral[nx][ny] = true
        }
    }
    
    if(contral[0][0])return 0;

    dp[0][0] = 1;
    for (int j;j<n;j++)
    {
        for(int k;k<m,k++)
        {
        if(j=0&&k=0)continue;
        if(contral[j][k])continue;
        if(j>0)dp[j][k]+=dp[j-1][k];
        if(k>0)dp[j][k]+=dp{j}[k-1];
        }
    }
    
    cout << dp[n][m] <<endl;
    return 0;
}