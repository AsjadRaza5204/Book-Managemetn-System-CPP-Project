#include "Book.h"

    BOOK::BOOK(){                      // default constructor
        this->id = 0;
        strcpy(this->bookName, " ");
        strcpy(this->authorName," ");
        strcpy(this->catagory, " ");
        this->price = 0;
        this->rating = 0.0;
    }

       BOOK::BOOK(int id, char * name, char * author, char * catagory, int price, float rating){
        this->id = id;
        strcpy(this->bookName,name);              // parametrised Constructor
        strcpy(this->authorName,author);
        strcpy(this->catagory, catagory);
        this->price = price;
        this->rating = rating;
       }

    BOOK::~BOOK(){          // destructor
        // delete [] ptr;
    }

    void BOOK::setId(int id){
        this->id = id;
    }
    void BOOK::setName(char * name){
        strcpy(this->bookName, name);
    }
    void BOOK::setAuthor(char * Author){
        strcpy(this->authorName, Author);
    }
    void BOOK::setCatagory(char * catagory){
        strcpy(this->catagory, catagory);
    }
    void BOOK::setPrice(int price){
        this->price = price;
    }
    void BOOK::setRating(float rating){
        this->rating = rating;
    }

    int BOOK::getId(){
        return this->id;
    }
    char *BOOK::getName(){
        return this->bookName;
    }
    char *BOOK::getAuthor(){
        return this->authorName;
    }
    char *BOOK::getCatagory(){
        return this->catagory;
    }
    int BOOK::getPrice(){
        return this->price;
    }
    float BOOK::getRating(){
        return  this->rating;
    }


void BOOK::display(){
    cout<<"\nID: "<<getId();
    cout<<"\nBook name: "<<getName();
    cout<<"\nauthor: "<<getAuthor();
    cout<<"\ncatagory: "<<getCatagory();
    cout<<"\nprice: "<<getPrice();
    cout<<"\nrating: "<<getRating();


}