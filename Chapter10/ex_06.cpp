#include <iostream>

using namespace std;

class Move{
private:
  double x;
  double y;
public:
  Move(double a = 0, double b = 0);
  void showmove() const;
  Move add(const Move & m) const;
  void reset(double a = 0, double b = 0);
};

Move::Move(double a , double b ){
  x = a;
  y = b;
}

void Move::showmove() const {
  cout<<"Current Location: \n";
  cout<<"("<<x<<", "<<y<<")\n";
}

Move Move::add(const Move & m) const{
  return Move(x+m.x,y+m.y);
}

void Move::reset(double a, double b){
  x = a;
  y = b;
}

int main()
{
	cout << "move0:" << endl;
	Move move0;
	move0.showmove();

	cout << "\nmove1:" << endl;
	Move move1(1.7,2.2);
	move1.showmove();

	cout << "\nmove2:" << endl;
	Move move2(3.5, 8.4);
	move2.showmove();

	cout << "\nStoring the sum of move1 and move2 in move3." << endl;
	cout << "move3:" << endl;
	Move move3(move1.add(move2));
	move3.showmove();

	cout << "\nResetting move2 to default values." << endl;
	move2.reset();
	cout << "move2:" << endl;
	move2.showmove();

	cout << "\nSetting new values for move2." << endl;
	move2.reset(13.1, 9.6);
	cout << "move2:" << endl;
	move2.showmove();

	cout << "\nStoring the sum of move1 and move2 in move0." << endl;
	move0 = move2.add(move1);
	cout << "move0:" << endl;
	move0.showmove();

	return 0;
}
