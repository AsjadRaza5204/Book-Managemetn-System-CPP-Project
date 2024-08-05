#include "BookArray.cpp"

int main()
{
    cout << "\nEnter how many BOOK yo have to add = ";
    int size;
    cin >> size;
    BOOKARRAY b(size);
    int choice = 0;

    while (choice != 10)
    {
        cout << "\n\t\t1 Add BOOK";
        cout << "\n\t\t2 Display BOOK";
        cout << "\n\t\t3 Update Book Details";
        cout << "\n\t\t4 Search Book";
        cout<<"\n\t\t5 Delete Book Details";
        cout<<"\n\t\t6 Sorting ";
        cout << "\n\t\t10 Exit";

        cout << "\nEnter a choice = ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            int id;
            char bookName[20];
            char authorName[20];
            char catagory[20];
            int price;
            float rating;
            cout << "Enter a book Id: ";
            cin >> id;
            cout << "Enter a Book Name: ";
            fflush(stdin);
            gets(bookName);
            cout << "Enter a Author Name: ";
            gets(authorName);
            cout << "Enter Book Catagory: ";
            gets(catagory);
            cout << "Enter a Book Price: ";
            cin >> price;
            cout << "Enter a Rating: ";
            cin >> rating;
            BOOK book(id, bookName, authorName, catagory, price, rating);
            if (b.add(book))
            {
                cout << "\nSuccessfully Added\n";
            }
            else
            {
                cout << "\nNo More Spcee\n";
            }
        }
        break;
        case 2:
        {
            b.display();
        }
        break;
        case 3:
        {  
            if (b.update())
            {
                cout<<"\n\nSuccessfully Update\n";
            }
            
        }
        break;
        case 4:
        {
            b.search();
        }
        break;
        case 5:
        {
            if (b.deleete())
            {
                cout<<"\n\nDeleted Successfully\n";
            }
            
        }
        break;
        case 6:
        {
            BOOKARRAY b1(b);
            b1.sorting(b1);
        }
        break;
        case 10:
        {
            cout << "\nThank you!!\n";
        }
        break;
        default:
        {
            cout << "\nInavalid Choice\n";
        }
            break;
        }
    }
    return 0;
}