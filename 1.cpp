#include <iostream>
#include <string>
using namespace std;

class Author
{
	string name;
	string email;
	char gender;
	
	public:
		Author(string name, string email, char gender)
		{
			this -> name = name;
			this -> email = email;
			this -> gender = gender;
		}
		void setName(string name)
		{
			this -> name = name;
		}
		string getName()
		{
			return name;
		}
		void setEmail(string email)
		{
			this -> email = email;
		}
		string getEmail()
		{
			return email;
		}
		void setGender(char gender)
		{
			this -> gender = gender;
		}
		char getGender()
		{
			return gender;
		}
		string tostring()
		{
			string one, two, three, four, five;
		
			one = "Author [name = ";
			two = ", email = ";
			three = ", gender = ";
			five = "]";
			
			return one + name + two + email + three + gender + five;
		}
};

int main()
{
	string name1;
	string email1;
	char gender1;
	
	cout << "Enter Your Name, Email, and Gender(m/f):" << endl;
	getline(cin, name1);
	cin >> email1 >> gender1;
	
	Author book(name1, email1, gender1);
	
	cout << book.tostring();
	
	return 0;
}
