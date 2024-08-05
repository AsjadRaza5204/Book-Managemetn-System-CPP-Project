#include "Book.cpp"

class BOOKARRAY
{
  int size;
  int index;
  BOOK *ptr;

public:
  BOOKARRAY(int);
  // BOOKARRAY();
  bool isFull();
  bool isEmpty();
  void display();
  bool add(BOOK &);
  bool update();
  int search();
  bool deleete();
  void sorting(BOOKARRAY &);
  BOOKARRAY(BOOKARRAY &);
};