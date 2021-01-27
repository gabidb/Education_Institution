#ifndef EducationalInstitution_h
#define EducationalInstitution_h
#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

class EducationalInstitution {
public:
    
    long long int computedAC;
    
    /*
     * Constructors
     */
    EducationalInstitution(const EducationalInstitution& rhs);
    EducationalInstitution(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price);
    ~EducationalInstitution();
    /*
     * Get the name accessor
     *
     *@return string
     */
    string getName() const;
    
    /*
     * Get the description accessor
     *
     *@return string
     */
    string getDescription() const;
    
    /*
     * Get the form of education accessor
     *
     *@return string
     */
    string getFormOfEd() const;
    
    /*
     * Get the application deadline accessor
     *
     *@return string
     */
    string getDeadline() const;
    
    /*
     * Get the min age accessor
     *
     *@return int
     */
    int getMinAge() const;
    
    /*
     * Get the max age accessor
     *
     *@return int
     */
    int getMaxAge() const;
    
    /*
     * Get the rating accessor
     *
     *@return double
     */
    double getRating() const;
    
    /*
     * Get the price accessor
     *
     *@return double
     */
    double getPrice() const;
    
    /*
     *Calculates the annual cost of each type of education
     *User can sort the institutions based on the cost
     *
     *@return double
     */
    virtual double AnnualCost();
    
    /*
     *A function to check if an institution is suitable
     *according to person's age
     *
     * @return bool
     */
    bool canAttend(int personAge);
    
    void print();

    
private:
    string name; // Name
    string description; // Description
    string formOfEd; // Form of education - part-time, full-time
    string deadline; // application deadline
    int minAge; //minimum age of the age group
    int maxAge; //maximum age of the age group
    double rating; // rating
    double price; //price
  
};


#endif /* EducationalInstitution_h */
