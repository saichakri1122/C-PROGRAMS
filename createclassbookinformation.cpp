#include <iostream>

using namespace std;

class Book {
private:
    int bookId;
    int pages;
    double prize;

public:

    void setBookId(int id) {
        bookId = id;
    }

    void setPages(int p) {
        pages = p;
    }

    void setPrize(double pr) {
        prize = pr;
    }


    int getBookId() {
        return bookId;
    }

    int getPages() {
        return pages;
    }

    double getPrize() {
        return prize;
    }

    void showBookDetails() {
        cout << "Book ID: " << bookId << endl;
        cout << "Number of Pages: " << pages << endl;
        cout << "Prize: $" << prize << endl;
    }
};

int main() {

    Book* book1 = new Book();
    Book* book2 = new Book();


    book1->setBookId(101);
    book1->setPages(200);
    book1->setPrize(50.99);


    book2->setBookId(102);
    book2->setPages(300);
    book2->setPrize(70.99);

   cout << "Book 1 Details:" << endl;
    book1->showBookDetails();

    cout << "\nBook 2 Details:" << endl;
    book2->showBookDetails();


    if (book1->getPrize() > book2->getPrize()) {
        cout << "\nThe costlier book is Book 1 with a prize of $" << book1->getPrize() << endl;
    } else if (book2->getPrize() > book1->getPrize()) {
       cout << "\nThe costlier book is Book 2 with a prize of $" << book2->getPrize() << endl;
    } else {
       cout << "\nBoth books have the same prize." << endl;
    }

    delete book1;
    delete book2;

    return 0;
}

Book* books = new Book[5];


books[0].setBookId(101);
books[0].setPages(200);
books[0].setPrize(50.99);

books[1].setBookId(102);
books[1].setPages(300);
books[1].setPrize(70.99);

books[2].setBookId(103);
books[2].setPages(400);
books[2].setPrize(90.99);

books[3].setBookId(104);
books[3].setPages(250);
books[3].setPrize(60.99);

books[4].setBookId(105);
books[4].setPages(500);
books[4].setPrize(120.99);


for (int i = 0; i < 5; i++) {
   cout << "Book " << i + 1 << " Details:" << endl;
    books[i].showBookDetails();
    cout << endl;
}


int maxPages = books[0].getPages();
int thickestBookId = books[0].getBookId();
for (int i = 1; i < 5; i++) {
        if (books[i].getPages() > maxPages) {
        maxPages = books[i].getPages();
        thickestBookId = books[i].getBookId();
    }
}
cout << "The thickest book is Book " << thickestBookId << " with " << maxPages << " pages." << endl;

delete[] books;
