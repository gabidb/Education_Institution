#ifndef OnlineCourse_h
#define OnlineCourse_h
#include "ELearning.h"
#include <string>

using namespace std;

class OnlineCourse: public ELearning {
public:
    OnlineCourse(const OnlineCourse& rhs);
    OnlineCourse(ELearning eLearning, bool certificate, string resources);
    OnlineCourse(string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string level, bool personalized, double duration,double levelOfInteraction, bool certificate, string resources);
    
    /*
     *Get the certificate accessor
     *
     *@return bool
     */
    bool getCertificate() const;
    
    /*
     *Get the resources accessor
     *
     *@return string
     */
    string getResources() const;
    
    
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
    bool certificate; //certificate fee
    string resources; //what resources are available - videos, ebook
};


#endif /* OnlineCourse_h */
