#include <iostream>
#include <vector>
using namespace std;

class Reader {
private:
    string name;
    int number;
public:
    Reader(const string& name, const int& number) {
        this->name = name;
        this->number = number;
    }

    void printInfo() {
        cout << "Reader's Name: " << name << ", Reader's Number: " << number << endl;

    }
};

class Library : public Reader {
private:
    string bookName;
    string status;

public:
    Library(const string& name, const int& number, const string& bookName, string status) : Reader(name, number) {
        this->bookName = bookName;
        this->status = status;
    }

    void borrowBook() {
        if (status == "available") {
            status = "borrowed";
            cout << "The book \"" << bookName << "\" has been successfully borrowed." << endl;
        }
        else {
            cout << "The book \"" << bookName << "\" is already borrowed." << endl;
        }
    }

    bool isBookOccupied() const {
        return status == "borrowed";
    }

    void printBookInfo() const {
        cout << "Book: " << bookName << ", Status: " << status << endl;
    }

    static void printAvailableBooks(const vector<Library>& books) {
        cout << "\nList of free books : " << endl;
        for (const auto& book : books) {
            if (book.status == "available") {
                book.printBookInfo();
            }
        }
    }
};

int main()
{
    vector<Library> books;
    books.push_back(Library("Pride and Prejudice", 1, "Book 1", "available"));
    books.push_back(Library("War and Peace", 2, "Book 2", "available"));
    books.push_back(Library("To Kill a Mockingbird", 3, "Book 3", "borrowed"));
    books.push_back(Library("1984", 4, "Book 4", "available"));

    Library::printAvailableBooks(books);

    cout << "\nExample of borrowing a book:" << endl;
    books[0].borrowBook();
    books[2].borrowBook();

    Library::printAvailableBooks(books);

    return 0;
}

