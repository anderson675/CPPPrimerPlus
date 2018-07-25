class Cd{
private:
  char performers[50];
  char label[20];
  int selections;
  double playtime;
public:
  Cd(char* s0, char* s1, int n, double x);
  Cd(const Cd & d);
  Cd();
  virtual ~Cd();
  virtual void Report()const;
  Cd & operator=(const Cd&d);
};

class Classic:public Cd{
private:
  char* works;
public:
  Classic(const char * s0, const char * s1, const char * s2, int n, double x);
  Classic(const char * s0, const Cd & d);
  Classic(const Classic & d);
  Classic();
  ~Classic();
  void Report() const;
  Classic & operator=(const Classic & c);
};
