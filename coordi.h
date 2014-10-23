#ifndef COORDIN_H_
#define COORDIN_H_


struct polar//极坐标
{
  double distance;
  double angle;
};


struct rect//直角坐标
{

  double x;
  double y;
};



polar rect_to_polar(rect xypos); //直角坐标变换成极坐标，入参（直角坐标），出参（极坐标）
void show_polar(polar dapos); //显示极坐标，入参（极坐标），出参（空）


#endif
