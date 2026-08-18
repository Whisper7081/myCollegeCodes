/*
为了准备一个独特的颁奖典礼，组织者在会场的一片矩形区域（可看做是平面直角坐标系的第一象限）铺上一些矩形地毯。
一共有 n 张地毯，编号从 1 到 n。现在将这些地毯按照编号从小到大的顺序平行于坐标轴先后铺设，后铺的地毯覆盖在前面已经铺好的地毯之上。

地毯铺设完成后，组织者想知道覆盖地面某个点的最上面的那张地毯的编号。注意：在矩形地毯边界和四个顶点上的点也算被地毯覆盖。

输入格式
输入共 n+2 行。

第一行，一个整数 n，表示总共有 n 张地毯。

接下来的 n 行中，第 i+1 行表示编号 i 的地毯的信息，包含四个整数 a,b,g,k，
每两个整数之间用一个空格隔开，分别表示铺设地毯的左下角的坐标 (a,b) 以及地毯在 x 轴和 y 轴方向的长度。

第 n+2 行包含两个整数 x 和 y，表示所求的地面的点的坐标 (x,y)。

输出格式
输出共 1 行，一个整数，表示所求的地毯的编号；若此处没有被地毯覆盖则输出 -1。
*/
//我的思路是，对每个点的地毯铺设状态作为自变量，不断地替换。但是感觉并不现实，因为点太多。
#include <bits/stdc++.h>
using namespace std;

struct Carpet {
    int a, b, g, k;  // 左下角坐标 (a,b)，x方向长度 g，y方向长度 k
};

int main() {
    int n;
    cin >> n;
    
    vector<Carpet> carpets(n + 1);  // 这里是动态数组，数据从 1 开始编号
    
    for(int i = 1; i <= n; i++) {
        cin >> carpets[i].a >> carpets[i].b >> carpets[i].g >> carpets[i].k;
    }
    
    int x, y;
    cin >> x >> y;
    
    // 从最后一张地毯开始往前找（编号大的在上面）
    for(int i = n; i >= 1; i--) {
        int a = carpets[i].a;
        int b = carpets[i].b;
        int g = carpets[i].g;
        int k = carpets[i].k;
        
        // 判断点 (x,y) 是否在这张地毯范围内
        if(x >= a && x <= a + g && y >= b && y <= b + k) {
            cout << i << endl;
            return 0;
        }
    }
    
    // 没有被任何地毯覆盖
    cout << -1 << endl;
    return 0;
}