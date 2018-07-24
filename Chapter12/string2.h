#include<iostream>

class String{
private:
  int len;
  char * st;
  static int numString;
  static const int CINLIM = 80;

public:
  int HowMany();
  String();
  String(const char* c);
  String(const String & s);
  ~String();
  String & StringLow();
	String & StringUp();
  short hasChar(char)const;

  String & operator=(const String & st);
	String & operator=(const char * cst);
	char & operator[](int i);
	const char & operator[](int i) const;

  friend bool operator<(const String&, const String&);
  friend bool operator>(const String&, const String&);
  friend bool operator==(const String&, const String&);
  friend String operator+(const String & st1, const String & st2);
  friend String operator+(const char * cst, const String & st);
  friend String operator+(const String & st, const char * cst);
  friend std::ostream& operator<<(std::ostream&, const String&);
  friend std::istream& operator>>(std::istream&, String&);
};
