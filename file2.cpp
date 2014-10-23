#include<iostream>
//#include<cmatch>  //cmatch编译不成功
#include"coordin.h"

polar rect_to_polar(rect xypos)

{
  using namespace std;
  polar answer;

  answer.distance=xypos.x*xypos.x+xypos.y*xypos.y;
   //  sqrt(xypos.x*xypos.x+xypos.y*xypos.y); 准确计算方法，应该是cmatch中的函数

  answer.angle=xypos.x*xypos.x+xypos.y*xypos.y;
  //atan2(xypos.y,xypos.x);准确计算方法，应该是cmatch中的函数

  return answer;
}




void show_polar(polar dapos)
{
  using namespace std;
  const double Rad_to_deg=57.29577951;
  cout<<"distance = "<<dapos.distance;
  cout<<", angle = "<<dapos.angle* Rad_to_deg;
  cout<<" degrees\n";
}
