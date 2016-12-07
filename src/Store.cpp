#include "Store.h"
#include "Album.h"
#include <string>
#include <iostream>
#include <algorithm>
Store::Store()
{           /*          create new albums                                        */
    Album* a1 = new Album(1, "Nickelback           ", "Dark Horse         ", 2008) ;
    Album* a2 = new Album(5, "Metallica            ", "Reload             ", 2003) ;
    Album* a3 = new Album(11,"Red Hot Chili Peppers", "Californication    ", 1999) ;
    Album* a4 = new Album(8, "Cake                 ", "Fashion Nugget     ", 1996) ;
    Album* a5 = new Album(85, "Linkin Park         ", "Minutes To Midnight", 2007) ;
            /*          add albums to vector                                     */
    this->m_albums.push_back(*a1);
    this->m_albums.push_back(*a2);
    this->m_albums.push_back(*a3);
    this->m_albums.push_back(*a4);
    this->m_albums.push_back(*a5);

}

Store::~Store()
{
    //dtor
}

void Store:: DisplayAlbums  ()
{
    unsigned int i ;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    cout<<"id              title        \t\t        band name     \t\t        year of release"<<endl;
    cout<<"----------------------------------------------------------------------------------------"<<endl;
    for (i=0; i<m_albums.size(); i++)
    {
        cout<< this->m_albums[i].GetId() << "\t|\t" <<   this->m_albums[i].Gettitle()<< "\t|\t" <<   this->m_albums[i].Getbandname()<< "\t|\t" <<   this->m_albums[i].Getyear()<<endl ;
        cout<<"-----------------------------------------------------------------------------------"<<endl;
    }

}
void Store :: SortByear()
{
    bool en_ordre = false;           //we will consider that our list is sorted
    int taille = this->m_albums.size();
    while(!en_ordre)            //While list not sorted
    {
        en_ordre = true;
        for(unsigned int i=0 ; i < this->m_albums.size()-1 ; i++)
        {
            if(this->m_albums[i].Getyear()<this->m_albums[i+1].Getyear())           //compare 2 by 2
            {
                swap(this->m_albums[i],this->m_albums[i+1]);                        //swap albums if condition is verified
                en_ordre = false;
            }
        }
        taille--;                                                                   //we will not consider the part after we get sorted
    }
}

void Store :: SortByBandName()
{
    bool en_ordre = false;
    int taille = this->m_albums.size();
    while(!en_ordre)                     //While list not sorted
    {
        en_ordre = true;
        for(unsigned int i=0 ; i < this->m_albums.size()-1 ; i++)
        {
            if((this->m_albums[i].Getbandname().compare (this->m_albums[i+1].Getbandname()) ) >0)  //compare 2 by 2
            {
                swap(this->m_albums[i],this->m_albums[i+1]); //swap albums if condition is verified
                en_ordre = false;
            }
        }
        taille--; //we will not consider the part after we get verified
    }
}





