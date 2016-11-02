#include <iostream>
#include <string>
using namespace std;

class Author
{
	string name;
	string email;
	char gender;
	
	public:
		Author()
		{
		};
		Author(string name, string email, char gender)
		{
			this -> name = name;
			this -> email = email;
			this -> gender = gender;
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
		char getGender()
		{
			return gender;
		}
		string tostring()
		{			
			string one, two, three, four, five;
			one = "Author[name=";
			two = ", email=";
			three = ", gender=";
			four = "]";
			
			return one + name + two + email + three + gender + four;
		}
};

class Book
{
	string bookName;
	Author *author;
	double price;
	int qty = 0;
	
	public:
		Book(string bookName, Author author[], double price)
		{
			this -> bookName = bookName;
			this -> author = new Author[2];
			for(int i = 0; i < 2; i++)
			{
				this -> author[i] = author[i];
			}
			this -> price = price;
		}
		Book(string bookName, Author author[], double price, int qty)
		{
			this -> bookName = bookName;
			this -> author = new Author[2];
			for(int i = 0; i < 2; i++)
			{
				this -> author[i] = author[i];
			}
			this -> price = price;
			this -> qty = qty;
		}
		string getName()
		{
			return bookName;
		}
		Author getAuthor()
		{
			return *author;
		}
		double getPrice()
		{
			return price;
		}
		int getQty()
		{
			return qty;
		}
		string tostring()
		{
			return "Book[name=" + bookName + ", " + author[0].tostring() + " and " + author[1].tostring() + ", " + to_string(price) + ", " + to_string(qty) + "\n";
		}
		string getAuthorNames()
		{
			return author[0].getName() + author[1].getName();
		}
};

int main()
{
	Author author[2] = {Author("Erwin", "Erwin", 'm'), Author("Rommel", "Rommel", 'm')};
	Book myBook ("War Tale", author, 12, 5);	
	
	cout << myBook.tostring() << endl;
	cout << myBook.getAuthorNames() << endl;
	
	return 0;
}
