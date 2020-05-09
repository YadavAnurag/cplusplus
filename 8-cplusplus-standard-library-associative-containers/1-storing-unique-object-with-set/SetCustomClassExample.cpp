#include <iostream>
#include <set>
#include <cmath>

using namespace std;

class Point2D{
  private:
    double mX{}, mY{};
  public:
    Point2D() = default;
    Point2D(
      double x,
      double y
    ):mX{x}, mY{y}{};
    double X() const{ return mX; };
    double Y() const{ return mY; };
    double Length() const{ return hypot(mX, mY); };
    double GetXY() const{ return (mX, mY); };
    void SetXY(double x, double y) {mX = x, mY = y; };
};

/* to store Point2D objects in set you must define a way to compare points objects
because std::set always store the objects inside it in sorted order.
*/
inline bool operator<(Point2D const& p1, Point2D const& p2){
  // comparing the points based on their distance from origin
  return p1.Length() < p2.Length();
}

ostream& operator<<(ostream& os, set<Point2D> const& points){
  os << "{ ";
  bool isFirst = true;
  for(auto const& p:points){ 
    if(isFirst){
      os << "( " << p.X() << ", " << p.Y() << " )";
      isFirst = false;
    }else{
      os << ", " << "( " << p.X() << ", " << p.Y() << " )";
    }
  }
  os << "}";

  return os;
}
int main(){

  set<Point2D> points{
    Point2D(2, 3),
    Point2D(20, 30),
    Point2D(22, 33)
  };

  points.insert(Point2D(10, 20));
  points.insert(Point2D(10, 20));

  cout << "Total size " << points.size() << endl <<  points;


  return 0;
}