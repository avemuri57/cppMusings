#include <iostream>

using namespace std;


class Apple{
	public:
		Apple(string color){
			setColor(color);
		}
		string getColor(){
			return color;
		}

		void setColor(string x){
			color = x;
		}
	private:
		string color;

};

int main(){

	Apple* myApple = new Apple("Yellow");
	cout << myApple->getColor() << endl;


	return 0;
}