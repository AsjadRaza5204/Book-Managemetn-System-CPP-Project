#include "BookArray.h"

BOOKARRAY::BOOKARRAY(int size)
{
    this->size = size;
    this->index = -1;
    ptr = new BOOK[size];
}
BOOKARRAY::BOOKARRAY(BOOKARRAY &b)
{
    this->size = b.size;
    this->index = b.index;
    ptr = new BOOK[size];
    for (int i = 0; i <= index; i++)
    {
        ptr[i] = b.ptr[i];
    }
}
bool BOOKARRAY::isEmpty()
{
    if (index == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool BOOKARRAY::isFull()
{
    if (index == size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void BOOKARRAY::display()
{
    if (isEmpty())
    {
        cout << "\n\nNothing To Print\n";
    }
    else
    {
        for (int i = 0; i <= index; i++)
        {
            ptr[i].display();
            cout << "\n.............................................................";
        }
    }
}

bool BOOKARRAY::add(BOOK &b)
{
    if (isFull())
    {
        return false;
    }
    else
    {
        ptr[++index] = b;
        return true;
    }
}

bool BOOKARRAY::update()
{
    int c = search();
    if (c != -1)
    {
        cout << "\n\t\t1 Update id";
        cout << "\n\t\t2 Update Book Name";
        cout << "\n\t\t3 Update Book Author Name";
        cout << "\n\t\t4 Update Book Catogary";
        cout << "\n\t\t5 Update Book Price";
        cout << "\n\t\t6 Update Book Rating";
        cout << "\nEnter a Choise: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nEnter a new Id = ";
            int id;
            cin >> id;
            ptr[c].setId(id);
            return true;
        }
        break;
        case 2:
        {
            cout << "\n\nEnter a New Book name = ";
            fflush(stdin);
            char name[100];
            gets(name);
            ptr[c].setName(name);
            return true;
        }
        break;
        case 3:
        {
            cout << "\n\nEnter a Author name = ";
            char name[100];
            fflush(stdin);
            gets(name);
            ptr[c].setAuthor(name);
            return true;
        }
        break;
        case 4:
        {
            cout << "\n\nEnter a Book Catagory = ";
            char cat[100];
            fflush(stdin);
            gets(cat);
            ptr[c].setCatagory(cat);
            return true;
        }
        break;
        case 5:
        {
            cout << "\n\nEnter a Book price = ";
            int price;
            cin >> price;
            ptr[c].setPrice(price);
            return true;
        }
        break;
        case 6:
        {
            cout << "\n\nEnter a book Rating = ";
            int rate;
            cin >> rate;
            ptr[c].setRating(rate);
            return true;
        }
        break;
        default:
            cout << "\n\nInvalid Option\n";
            break;
        }
    }
    return false;
}
int BOOKARRAY::search()
{

    if (isEmpty())
    {
        cout << "\n the given Book is Empty";
        return -1;
    }
    else
    {
        cout << "\n\t\t1 Search by Book ID";
        cout << "\n\t\t2 Search by Book name";
        cout << "\n\nEnter a choice = ";
        int chose;
        cin >> chose;
        switch (chose)
        {
        case 1:
        {
            cout << "\nEnter a id = ";
            int id;
            cin >> id;

            for (int i = 0; i <= index; i++)
            {
                if (ptr[i].getId() == id)
                {
                    ptr[i].display();
                    cout << "\n\nSearching successful\n";
                    return i;
                }
                else
                {
                    cout << "\nThe given id is not Matched\n";
                    return -1;
                }
            }
        }
        break;
        case 2:
        {
            if (isEmpty())
            {
                cout << "\nBook Array is Empty\n";
                // return -1;
            }
            else
            {
                cout << "\nEnte a Book name = ";
                fflush(stdin);
                char name[100];
                gets(name);
                for (int i = 0; i <= index; i++)
                {
                    if (strcasecmp(ptr[i].getName(), name) == 0)
                    {
                        ptr[i].display();
                        cout << "\n\nSearching successful\n";
                        return i;
                    }
                    else
                    {
                        cout << "\nThe Given Name is not Matched\n";
                        return -1;
                    }
                }
            }
        }
        break;
        default:
            cout << "\nInvalid Input";
            break;
        }
    }
}

bool BOOKARRAY::deleete()
{
    int c = search();
    if (c != -1)
    {
        for (int i = c; i <= index; i++)
        {
            ptr[i] = ptr[i + 1];
        }
        // cout<<"\n\nData Deleted Successfully\n";
        ptr[index--];
        return true;
    }
    else
    {
        return false;
    }
}

void BOOKARRAY::sorting(BOOKARRAY &b)
{
    if (isEmpty())
    {
        cout << "\n\nNothing To sort\n";
        return;
    }
    else
    {
        cout << "\n\t\t1 Sort id";
        cout << "\n\t\t2 sort ny Book Price";
        cout << "\n\t\t3 Sort by Book Rating";
        cout << "\nEnter a Choise: ";
        int choice;
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i <=index; i++)
            {
                for (int j = i + 1; j <= index; j++)
                {
                    if (ptr[i].getId() > ptr[j].getId())
                    {
                        BOOK temp = ptr[i];
                        ptr[i] = ptr[j];
                        ptr[j] = temp;
                    }
                }
            }
            b.display();
        }
        break;
        case 2:
        {
            for (int i = 0; i <= index; i++)
            {
                for (int j = i+1; j <= index; j++)
                {
                    if (ptr[i].getPrice() > ptr[j].getPrice())
                    {
                        BOOK temp = ptr[i];
                        ptr[i] = ptr[j];
                        ptr[j] = temp;
                    }
                    
                }
                
            }
            b.display();
        }
        break;
        case 3:
        {
            for (int i = 0; i <= index; i++)
            {
                for (int j = 1 + i; j <= index; j++)
                {
                    if (ptr[i].getRating() > ptr[j].getRating())
                    {
                        BOOK temp = ptr[i];
                        ptr[i] = ptr[j];
                        ptr[j] = temp;
                    }
                    
                }
                
            }
            b.display();
        }
        break;
        default:
        cout<<"\nInvalid Input\n";
            break;
        }
    }
}