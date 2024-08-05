#include <iostream>
using namespace std;
#include <string.h>

class BOOK
{
    int id;
    char bookName[20];
    char authorName[20];
    char catagory[20];
    int price;
    float rating;
public:
    BOOK();
    BOOK(int, char *, char *, char *, int, float);
    ~BOOK();

    void setId(int);
    void setName(char *);
    void setAuthor(char *);
    void setCatagory(char *);
    void setPrice(int);
    void setRating(float);

    int getId();
    char *getName();
    char *getAuthor();
    char *getCatagory();
    int getPrice();
    float getRating();

void display();

    // void hc(Book*);
    // void add(Book*);
    // void allBook(Book*);
    // int search(Book*);
    // void delet(Book*);
    // void update(Book*);
    // void catagory(Book*);
    // void sort(Book*);
    // global intialization
    // int count=2;
    // int size=50;
};