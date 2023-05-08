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
Clock::Clock(){  //��ʾ��ǰʱ��
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
    this->h=h;  //��������Լ���thisָ��,�����������������h��m��s
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
    // cout<<"�����뵱ǰ��ʱ�䣻";
    // cin>>h>>m>>s;
    Clock myClock; //���������
    Clock c;
    while(1){
        system("cls");  //����
        c.AddOneS();
        c.ShowTime();
        _sleep(1000); //�����ٶ�
    }
    // myClock.SetTime(h,m,s);
    // myClock.ShowTime();
    // system("pause");  //��һ��DOS���������ͣ�ڴ���
    return 0;
}