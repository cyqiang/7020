#include<iostream>
using namespace std;
class clock
{
public:
	clock(int newH, int newM, int newS);
	void setTime(int newH, int newM, int newS);
	void showTime();

private:
	int hour,minute,second;
};
clock::clock(int newH,int newM,int newS)
{
	hour=newH;
	minute=newM;
	second=newS;
}
void clock::setTime(int newH,int newM,int newS)
{
	hour=newH;
	minute=newM;
	second=newS;
}
void clock::showTime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main()
{

	class clock c(0,0,0);
	c.showTime();
	c.setTime(8,30,30);
	c.showTime();
	//class clock c2;
}