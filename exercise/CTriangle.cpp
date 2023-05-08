#include <iostream>
#include <cmath>
using namespace std;
class CTriangle{
private:
    float a,b,c;
public:
    CTriangle(float aa,float bb,float cc);
    CTriangle(CTriangle &c);
    ~CTriangle();
    int GetPerimeter();
    int GetArea();
    void display();
};
 CTriangle::CTriangle(float aa,float bb,float cc){
    a=aa;
    b=bb;
    c=cc;
 }
 CTriangle::CTriangle(CTriangle &c){
    this->a=c.a;
    this->b=c.b;
    this->c=c.c;
 }
 int CTriangle::GetPerimeter()
 {
    if(a<=0||b<=0||c<=0){
        cout<<"no triangle"<<endl;
        return 0;
    }
    if((a+b)<c||(b+c)<a||(a+c)<b){
        cout<<"no triangle"<<endl;
        return 0;
    }
    return (a+b+c);
 }
 int CTriangle::GetArea(){
    if(a<=0||b<=0||c<=0){
        cout<<"no triangle"<<endl;
        return 0;
    }
    if((a+b)<c||(b+c)<a||(a+c)<b){
        cout<<"no triangle"<<endl;
        return 0;
    }
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
 }
 void CTriangle::display(){
    cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
 }
 int main(){
    float x,y,z;
    cin>>x>>y>>z;
    CTriangle triangle(x,y,z);
    cout<<triangle.GetArea()<<endl;
    cout<<triangle.GetPerimeter()<<endl;
    triangle.display();
 }
 