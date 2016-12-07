#ifndef ALBUM_H
#define ALBUM_H
#include <string>
using namespace std;

class Album
{
public:
    /** Default constructor */
    Album();

    /** parameterized constructor */
    Album(int Id,  string title, string bandname,int year )
    {
        this->m_Id = Id;
        this->m_year = year;
        this->m_bandname = bandname;
        this->m_title = title;
    };
    /** Default destructor */
    virtual ~Album();

    /** Access m_Id
     * \return The current value of m_Id
     */
    unsigned int GetId()
    {
        return m_Id;
    }
    /** Set m_Id
     * \param val New value to set
     */
    void SetId(unsigned int val)
    {
        m_Id = val;
    }
    /** Access m_year
     * \return The current value of m_year
     */
    unsigned int Getyear()
    {
        return m_year;
    }
    /** Set m_year
     * \param val New value to set
     */
    void Setyear(unsigned int val)
    {
        m_year = val;
    }
    /** Access m_bandname
     * \return The current value of m_bandname
     */
    string Getbandname()
    {
        return m_bandname;
    }
    /** Set m_bandname
     * \param val New value to set
     */
    void Setbandname(string val)
    {
        m_bandname = val;
    }
    /** Access m_title
     * \return The current value of m_title
     */
    string Gettitle()
    {
        return m_title;
    }
    /** Set m_title
     * \param val New value to set
     */
    void Settitle(string val)
    {
        m_title = val;
    }
    bool  sortByName( Album &lhs,   Album &rhs) ;

protected:

private:
    unsigned int m_Id; //!< Member variable "m_Id"
    unsigned int m_year; //!< Member variable "m_year"
    string m_bandname; //!< Member variable "m_bandname"
    string m_title; //!< Member variable "m_title"
};

#endif // ALBUM_H
