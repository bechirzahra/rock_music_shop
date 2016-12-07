#include <iostream>
#include "Store.h"
#include "Album.h"
#include <algorithm>
using namespace std;

int main()
{
    int  choice  = 100  ;
    Store *s  = new Store ()  ;
    cout<<"----------welcome to our rock music shop --------------"<<endl ;
    cout<<"----------------make your choice ---------------------"<<endl ;
    while  (choice !=0)
    {
        cout<<"-----1/ display all albums randomly-------------------"<<endl ;
        cout<<"-----2/ display all albums sorted by  realese date----"<<endl ;
        cout<<"-----3/ display all albums sorted by band name  ------"<<endl ;
        cout<<"----------------------0/ exit  -----------------------"<<endl ;

        cin>>choice ;

        switch (choice)
        {

        case 1   :
            s->DisplayAlbums();
            break ;
        case 2   :
            s->SortByear();
            s->DisplayAlbums();
            break ;
        case 3   :
            s->SortByBandName();
            s->DisplayAlbums();
            break ;
        }


    }



    cout << "All Albums" << endl;
    s->SortByear();
    s->DisplayAlbums();
    cout << "Sorted By year of release" << endl;

    cout << "Sorted By band name" << endl;


    return 0;
}
