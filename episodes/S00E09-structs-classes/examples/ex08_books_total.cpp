// example: ex08_books_total
// purpose: Use a vector of structs and a function that reads them through a const reference.
// expect: ok
#include <iostream>
#include <string>
#include <vector>

struct Book {
    std::string title;
    int pages = 0;
};

int total_pages(const std::vector<Book>& books) {
    int total = 0;
    for (const Book& book : books) {
        total += book.pages;
    }
    return total;
}

int main() {
    std::vector<Book> shelf{{"Maps", 120}, {"Birds", 245}, {"Stars", 310}};
    std::cout << shelf.size() << " books, " << total_pages(shelf) << " pages\n";
    std::cout << "first: " << shelf[0].title << '\n';
}
