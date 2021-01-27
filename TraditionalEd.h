#ifndef TraditionalEd_h
#define TraditionalEd_h
#include "EducationalInstitution.h"
#include <string>

using namespace std;


class TraditionalEd: public EducationalInstitution
{
public:
    /*
     * Constructors
     */
    TraditionalEd(const TraditionalEd& rhs);
    TraditionalEd(EducationalInstitution education, string location, int yearsOfEd, double textbook, string type, int classSize);
    TraditionalEd(string name, string description, string formOfEd, string deadline, int minAge, int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize);
    
    /*
     *Get the location accessor
     *
     *@return string
     */
    string getLocation() const;
    
    /*
     *Get the class size accessor
     *
     *@return int
     */
    int getClassSize() const;
    
    /*
     *Get the years of studying accessor
     *
     *@return int
     */
    int getYearsOfEd() const;
    
    /*
     *Set the years of studying accessor
     *
     *@param int
     */
    void setYearsOfEd(int years);
    
    /*
     *Get the textbook accessor
     *
     *@return double
     */
    double getTextbook() const;
    
    /*
     *Get the type accessor
     *
     *@return string
     */
    string getType() const;
    
    /*
     *Calculates the annual cost of each type of education
     *User can sort the institutions based on the cost
     *
     *@return double
     */
    double AnnualCost(long long int cost);
    
    /*
     *
     *Function to display all the properties
     *
     */
    void print();
    
private:
    string location; // Location
    int yearsOfEd; //wanted years of education
    double textbook; //cost of textbooks
    string type; //private or public
    int classSize; //class size - 15, 50, 150
    
};


#endif /* TraditionalEd_h */
