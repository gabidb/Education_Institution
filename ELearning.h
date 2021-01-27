
#ifndef ELearning_h
#define ELearning_h
#include "EducationalInstitution.h"
#include <string>

using namespace std;

class ELearning: public EducationalInstitution
{
public:
    /*
     * Constructors
     */
    ELearning (const ELearning& rhs);
    ELearning (EducationalInstitution education, string level, bool personalized, double duration,double levelOfInteraction);
    ELearning (string name, string description, string formOfEd, string deadline, int minAge,int maxAge, double rating, double price, string level, bool personalized, double duration,double levelOfInteraction);
    
    /*
     *Get the level accessor
     *
     *@return string
     */
    string getLevel() const;
    
    /*
     *Get personalized accessor
     *
     *@return bool
     */
    bool getPersonalized() const;
    
    /*
     *Get the duration accessor
     *
     *@return double
     */
    double getDuration() const;
    
    /*
     *Get the level of interaction accessor
     *
     *@return double
     */
    double getLevelOfInteraction() const;
    
    /*
     *Calculates the annual cost of each type of education
     *User can sort the institutions based on the cost
     *
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
    string level; // level - beginning, advanced
    bool personalized; //personalized
    double duration; //duration of the education
    double levelOfInteraction; // level of interaction
};

#endif /* ELearning_h */
