
#ifndef __POINT_H__
#define __POINT_H__
#include "base.h"

class point {
public:
  point();
  point(int x, int y);
  point(double x, double y);
  ~point();
  
  double len() const;
  int64 len2() const;
  
  bool operator==(const point &right);
  bool operator!=(const point &right);
  

public:
  int x_, y_;
};

#endif //__POINT_H__