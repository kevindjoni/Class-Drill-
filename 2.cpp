#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Author
{
	string name;
	string email;
	char gender;
	
	public:
		Author()
		{
		}
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

class Book
{
	string name;
	double price;
	int qty = 0;
	Author author;
	
	public:
		Book(string name, Author author, double price)
		{
			this -> name = name;
			this -> author = author;
			this -> price = price;
		}
		Book(string name, Author author, double price, int qty)
		{
			this -> name = name;
			this -> author = author;
			this -> price = price;
			this -> qty = qty;
		}
		string getName()
		{
			return name;
		}
		void setName(string name)
		{
			this -> name = name;
		}
		Author getAuthor()
		{
			return author;
		}
		double getPrice()
		{
			return price;
		}
		void setPrice(double price)
		{
			this -> price = price;
		}
		int setQty()
		{
			return qty;
		}
		void setQty(int qty)
		{
			this -> qty = qty;
		}
		string tostring()
		{
			string one, two, three, four, five;
			
			one = "Book[name = ";
			two = ",";
			three = ", price = ";
			four = ", qty = ";
			five = "]";
			
			return one + name + two + author.tostring() + three + to_string(price) + four + to_string(qty) + five; 
		}
};

int main()
{
	Author newAuthor("Erwin Rommel", "erwin@yahoo.com", 'm');
	Book newBook("War Tale", newAuthor, 12.50, 5);
	cout << newBook.tostring();
	
	return 0;
}
