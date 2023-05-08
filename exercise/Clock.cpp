#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
class Clock{
public:
    Clock();
    ~Clock(void){};
    int h,m,s;
    void SetTime(int h,int m,int s);
    void ShowTime();
    void AddOneS();
};
Clock::Clock(){  //显示当前时间
    //h=m=s=0;
    time_t t;
    struct tm tt;
    t=time(NULL);
    localtime_s(&tt,&t);
    h=tt.tm_hour;
    m=tt.tm_min;
    s=tt.tm_sec;
}
void Clock::SetTime(int h,int m,int s){
    this->h=h;  //类对象有自己的this指针,可用于区别括号里的h，m，s
    this->m=m;
    this->s=s;
}
void Clock::ShowTime(){
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void Clock::AddOneS(){
    s++;
    if(s>=60){
        m++;
        s=0;
        if(m>=60){
            m=0;
            h++;
            if(h>=24){
                h=0;
            }
        }
    }
}
int main(){
    // int h,m,s;
    // cout<<"请输入当前的时间；";
    // cin>>h>>m>>s;
    Clock myClock; //生成类对象
    Clock c;
    while(1){
        system("cls");  //清屏
        c.AddOneS();
        c.ShowTime();
        _sleep(1000); //放慢速度
    }
    // myClock.SetTime(h,m,s);
    // myClock.ShowTime();
    // system("pause");  //是一个DOS命令，用来暂停黑窗口
    return 0;
}