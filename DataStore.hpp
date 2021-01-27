#ifndef DataStore_hpp
#define DataStore_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <fstream>
#include <string>
#include "EducationalInstitution.h"
#include "ELearning.h"
#include "TraditionalEd.h"
#include "HighSchool.h"
#include "University.h"
#include "OnlineCourse.h"
#include "Application.h"

extern vector<EducationalInstitution*> institutions;

class DataStore{
public:
    
   
    /*
     * Clear products vector
     *
     * @param vector<EducationalInstitution*> &institutions
     */
    void clear(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load data for all
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void getData(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load for all EducationalInstitution data
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void educationalInstitution(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load for all TraditioalEd data
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void traditionalEd(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load for all ELearning data
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void eLearning(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load data for HighSchool
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void highSchool(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load data for university
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void university(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load data for OnlineCourse
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void onlineCourse(vector<EducationalInstitution*> &institutions);
    
    /*
     * Load data for Application
     *
     *@param vector<EducationalInstitution*> &institutions
     */
    void application(vector<EducationalInstitution*> &institutions);
};



#endif /* DataStore_hpp */
