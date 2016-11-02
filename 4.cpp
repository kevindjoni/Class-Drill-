#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class MyPoint
{	private:
	int x = 0;
	int y = 0;
	
	public:
		MyPoint()
		{
		}
		MyPoint(int x, int y)
		{
			this -> x = x;
			this -> y = y;
		}
		int getX()
		{
			return x;
		}
		void setX(int x)
		{
			this -> x = x;
		}
		int getY()
		{
			return y;
		}
		void setY(int y)
		{
			this -> y = y;
		}
		int *getXY()
		{
			int *array = new int[2];
			array[0] = this -> x;
			array[1] = this -> y;
			return array;
		}
		void setXY(int x, int y)
		{
			this -> x = x;
			this -> y = y;
		}
		string tostring()
		{
			return "(" + to_string(x) + "," + to_string(y) + ")";
		}
		double distance(int x, int y)
		{
			return sqrt(pow((this -> x - x), 2) + pow((this -> y = y), 2));
		}
		double distance(MyPoint p)
		{
			return distance(p.x, p.y);
		}
};

int main()
{
	MyPoint mp;
	mp.setX(5);
	mp.setY(8);
	int *array = mp.getXY();
	cout << array[0];
	cout << array[1];

	return 0;
}
