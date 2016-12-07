#ifndef STORE_H
#define STORE_H
#include <string>
#include "Album.h"
#include <vector>

class Store
{
public:
    /** Default constructor */
    Store();
    /** Default destructor */
    virtual ~Store();

    /** Access m_albums
     * \return The current value of m_albums
     */
    vector<Album> Getalbums()
    {
        return m_albums;
    }
    /** Set m_albums
     * \param val New value to set
     */
    void Setalbums(vector<Album> val)
    {
        m_albums = val;
    }
    void DisplayAlbums();
    void SortByear();
    bool sortByName( const  Album &lhs, const   Album &rhs);
    void SortByBandName();

protected:

private:
    vector<Album> m_albums; //!< Member variable "m_albums"

};

#endif // STORE_H
