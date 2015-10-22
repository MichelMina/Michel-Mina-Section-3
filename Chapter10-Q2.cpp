#include <iostream>

using namespace std;

class Person{
	private:
    static const int LIMIT=25;
	string lname;
	char fname[LIMIT];

	public:
	Person(){
		lname="";
		fname[0]='\0';
	}
	Person(const string & ln, const char * fn = "Heyyou"){
		lname=ln;
		int i=0;
		while (i<=7)
		{
			fname[i]=fn[i];
			i++;
		}

	}

	void Show(){
		cout <<fname<<" "<<lname<<endl;
	}

	void Show_Formal(){
		cout <<lname<<" "<<fname<<endl;
	}

};

int main()
{
	Person First(),
	Second("Said"),
	Third("Said","Mohammed");

	Second.Show();
	Third.Show_Formal();

    return 0;
}
