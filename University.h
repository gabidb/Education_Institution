#ifndef University_h
#define University_h
#include "TraditionalEd.h"
#include <string>

using namespace std;

class University: public TraditionalEd {
public:
    /*
     * Constructors
     */
    University (const University& rhs);
    University (TraditionalEd traditionalEd, string major, string degree,double insurance, string activity, string mealPlan, string housing, string amentities);
    University(string name, string description, string formOfEd, string deadline, int minAge, int maxAge, double rating, double price, string location, int yearsOfEd, double textbook, string type, int classSize, string major, string degree,double insurance, string activity, string mealPlan, string housing, string amentities);
    
    /*
     *Get the major accessor
     *
     *@return string
     */
    string getMajor() const;
    
    /*
     *Get the degree accessor
     *
     *@return string
     */
    string getDegree() const;
    
    /*
     *Get the amentities accessor
     *
     *@return string
     */
    string getAmentities() const;
    
    /*
     *Get the insurance fee accessor
     *
     *@return double
     */
    double getInsurance() const;
    
    /*
     *Get the activity fee accessor
     *
     *@return string
     */
    string getActivity() const;
    
    /*
     *Get the meal plan fee accessor
     *
     *@return string
     */
    string getMealPlan() const;
    
    /*
     *Get the housing fee accessor
     *
     *@return string
     */
    string getHousing() const;
    
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
    string major; //major
    string degree; //bachelor, masters, PhD
    string amentities; //amentities available on campus
    string activity; //activities
    string mealPlan; //meal plan
    string housing; //housing 
    double insurance; //insurance fee
};
#endif /* University_h */
