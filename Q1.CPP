#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int publishedYear;

    Book(string t, string a, int year) : title(t), author(a), publishedYear(year) {}

    void displayBookDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year of Publication: " << publishedYear << endl;
        cout << endl;
    }
};

int main() {
    const int numBooks = 3;
    Book myLibrary[numBooks] = {
        {"The Adventure Begins", "John Authorson", 2000},
        {"Codes of Creativity", "Jane Creative", 2010},
        {"Journey to Tomorrow", "Sam Futurist", 2020}
    };

    for (int i = 0; i < numBooks; ++i) {
        cout << "Book #" << i + 1 << " Details:" << endl;
        myLibrary[i].displayBookDetails();
    }

    return 0;
}
