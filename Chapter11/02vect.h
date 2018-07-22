#include <iostream>
namespace VECTOR{
  class Vector{
  private:
    double x;
    double y;
    double mag;
    double ang;
    char mode;
    //void set_mag();
    //void set_ang();
    //void set_x();
    //void set_y();
    double CalculateMag(double x, double y) const;
    double CalculateAng(double x, double y) const;
    double CalculateX(double mag, double ang) const;
    double CalculateY(double mag, double ang) const;
  public:
    Vector();
    void Reset(double n1, double n2, char form);
    Vector(double n1, double n2, char form = 'f');
    void set(double n1, double n2, char form = 'r');
    ~Vector();
    double xval() const {return x;}
    double yval() const {return y;}
    double magval() const {return CalculateMag(x, y);}
    double angval() const {return CalculateAng(x, y);}
    void polar_mode();
    void rect_mode();

    Vector operator+ (const Vector & b) const;
    Vector operator- (const Vector & b) const;
    Vector operator-() const;
    Vector operator* (double n) const;

    friend Vector operator* (double n, const Vector & a);
    friend std::ostream & operator<< (std::ostream & os, const Vector & v);
  };
}
