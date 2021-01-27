#include "Application.h"

/*
 * Constructor
 */
Application::Application(ELearning eLearning, string review, string compatibility, string plan, double subscription, double size, int month): ELearning(eLearning), review(review), compatibility(compatibility), subscription(subscription), size(size), month(month), plan(plan){}

/*
 * Constructor
 */
Application::Application(string name, string description, string formOfEd, string deadline, int minAge,int maxAge,double rating, double price, string level, bool personalized, double duration,double levelOfInteraction, string review, string compatibility,string plan, double subscription, double size, int month):ELearning(name, description, formOfEd, deadline, minAge, maxAge, rating, price, level, personalized, duration, levelOfInteraction), review(review), compatibility(compatibility), subscription(subscription), size(size), month(month), plan(plan){}

/*
 * Copy Constructor
 */
Application::Application(const Application& rhs): review(rhs.review), compatibility(rhs.compatibility), subscription(rhs.subscription), size(rhs.size),month(rhs.month), plan(rhs.plan), ELearning(rhs.getName(), rhs.getDescription(), rhs.getFormOfEd(), rhs.getDeadline(), rhs.getMinAge(),rhs.getMaxAge(), rhs.getRating(), rhs.getPrice(), rhs.getLevel(), rhs.getPersonalized(), rhs.getDuration(), rhs.getLevelOfInteraction()){}
/*
 *Get the review accessor
 *
 *@return string
 */
string Application::getReview() const{
    return review;
}

/*
 *Get the compatibility accessor
 *
 *@return string
 */
string Application::getCompatibility() const{
    return compatibility;
}

/*
 *Get the subscription accessor
 *
 *@return double
 */
double Application::getSubscription() const{
    return subscription;
}

/*
 *Get the size accessor
 *
 *@return double
 */
double Application::getSize() const{
    return size;
}

/*
 *Get the month accessor
 *
 *@return int
 */
int Application::getMonth() const{
    return month;
}

/*
 *Get the plan type accessor
 *
 *@return string
 */
string Application::getPlan() const{
    return plan;
}

/*
 *Calculates the annual cost of each type of education
 *User can sort the institutions based on the cost
 *
 *@return double
 */

double Application::AnnualCost(long long int cost = 0){
    
    if(plan == "basic")
        cost = month * subscription;
    else if (plan == "premium")
        cost = month * (subscription + 0.5 * subscription);
    else if (plan == "add-free")
        cost = month * (subscription + 0.35 * subscription);
    
    return ELearning::AnnualCost(cost);
}

void Application::print(){
    
    ELearning:: print();
    
    cout << "User's feedback:              " << review << endl;
    cout << "Compatibility:                " << compatibility << endl;
    cout << "Recomended plan:              " << plan << endl;
    cout << "Subscription cost:            " << subscription << endl;
    cout << "Application size:             " << size << endl;
    
}

string review; //uses' feedback
string compatibility; //comaptibility - ios 12 or above
string plan; //type of plan
int month; //duration of the subscription
double subscription; //cost of subscriptions in months
double size; //size of the application
