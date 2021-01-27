#ifndef Application_h
#define Application_h
#include "ELearning.h"
#include <string>

using namespace std;

class Application: public ELearning {
public:
    /*
     * Constructors
     */
    Application(const Application& rhs);
    Application(ELearning eLearning, string review, string compatibility,string plan, double subscription, double size, int month);
    Application(string name, string description, string formOfEd, string deadline, int minAge,int maxAge,double rating, double price, string level, bool personalized, double duration,double levelOfInteraction, string review, string compatibility,string plan, double subscription, double size, int month);
    
    /*
     *Get the review accessor
     *
     *@return string
     */
    string getReview() const;
    
    /*
     *Get the compatibility accessor
     *
     *@return string
     */
    string getCompatibility() const;
    
    /*
     *Get the subscription accessor
     *
     *@return double
     */
    double getSubscription() const;
    
    /*
     *Get the size accessor
     *
     *@return double
     */
    double getSize() const;
    
    /*
     *Get the plan type accessor
     *
     *@return string
     */
    string getPlan() const;
    
    /*
     *Get the month accessor
     *
     *@return int
     */
    int getMonth() const;
    
    /*
     *Calculates the annual cost of each type of education
     *User can sort the institutions based on the cost
     *
     *@return double
     */
    
    double AnnualCost(long long int cost );
    
    /*
     *
     *Function to display all the properties
     *
     */
    void print();

    
private:
    string review; //uses' feedback
    string compatibility; //comaptibility - ios 12 or above
    string plan; //type of plan
    int month; //duration of the subscription
    double subscription; //cost of subscriptions in months
    double size; //size of the application
};

#endif /* Application_h */
