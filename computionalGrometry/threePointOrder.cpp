
#include <bits/stdc++.h>
using namespace std;
class point{
public :
    double x,y;
    point(double x,double y):x(x),y(y){
    }
    friend double Dot(point p1,point p2);
    friend double Set(point p1,point p2);
    friend point operator -(point p1,point p2){
        return point(p1.x-p2.x,p1.y-p2.y);//-的重载
    }
};
double Set(point p1,point p2){
    return p1.x*p2.y-p2.x*p1.y;//叉乘的坐标形式
}
//叉乘的计算|p1-p2|*|p3-p1|*sin
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    double x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        if(x1==0&&y1==0&&x2==0&&y2==0&&x3==0&&y3==0)break;
        point p1(x1,y1);
        point p2(x2,y2);
        point p3(x3,y3);
        if(Set(p2-p1,p3-p1)<0)cout<<0<<endl;//第三个点是在p2,p1这条直线上方则叉乘的角度大于pi,所以sin小于0，即逆时针给出点
        else cout<<1<<endl;
    }
    return 0;
}
