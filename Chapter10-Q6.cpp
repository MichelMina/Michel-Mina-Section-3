#include <iostream>

using namespace std;

class Move
{
	private:
	double x;
	double y;

	public:
	Move(double a = 0, double b = 0){
		x = a;
		y = b;
	}
    void showmove(){
		cout <<"X => "<<x<<endl;
		cout <<"Y => "<<y<<endl;
	}
	Move add(const Move & m){
		x += m.x;
		y += m.y;
	}
	void Reset(double a = 0, double b = 0){
		x = a;
		y = b;
	}
};


int main()
{
	int User_X,
		User_Y;

	int User_MoveX,
		User_MoveY;




	cout <<"Please enter your X and Y Coords"<<endl;
	cin>>User_X>>User_Y;

	Move Trial(User_X,User_Y);;

	cout <<"Please Enter how long you wanna move X and Y"<<endl;
	cin>>User_MoveX>>User_MoveY;


	Move Adder(User_MoveX,User_MoveY);
	Trial.add(Adder);

	Trial.showmove();

	Trial.Reset();
	cout <<"After Reset \n";
	Trial.showmove();
    return 0;
}
