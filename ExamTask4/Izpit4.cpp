#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string bookName;
    string authorName;
    string date;

public:
    Book(const string& bookName, const string& authorName, const string& date) {
        this->bookName = bookName;
        this -> authorName = authorName;
        this->date = date;
    }

    string getDate() const {
        return date;
    }

    friend ostream& operator << (ostream& cout, const Book& book) {
        cout << book.bookName << endl;
        cout << book.authorName << endl;
        cout << book.date << endl;
        return cout;
    }
};

class Library {
private:
    int numberBookName;
    vector<Book> books;

public:
    Library() {}

    void addBook(const Book& book) {
        books.push_back(book);
    }
    
    friend ostream& operator <<(ostream& cout, const Library& library) {
    
        string searchDate;
        cout << "Enter date for search" << endl;
        cin >> searchDate;

        cout << "Books, busy on: " << searchDate << endl;
        for (const Book& book : library.books) {
            if (book.getDate() == searchDate) {
                cout << book;
            }
        
        }
        return cout;
    }
};

int main()
{
    Book book1("Властелинът на пръстените", "Дж. Р. Р. Толкин", "2024-06-01");
    Book book2("1984", "Джордж Оруел", "2024-06-02");
    Book book3("Хари Потър", "Дж. К. Роулинг", "2024-06-01");

    Library library;

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    cout << library;

    return 0;
}

