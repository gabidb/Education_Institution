#include "DataStore.hpp"

/*
 * Clear products vector
 *
 * @param vector<EducationalInstitution*> &institutions
 */
void DataStore::clear(vector<EducationalInstitution*> &institutions){
    for (auto i : institutions)
        delete i;
    institutions.clear();
}

/*
 * Load for all EducationalInstitution data
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::educationalInstitution(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/EducationalInstitution.txt");
    if(file.fail()){
        cout << "Please copy a folder Text_Files to Debug folder" << endl;
        cerr << "EducationalInstituition file failed to open" << endl;
    }
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        
        EducationalInstitution* institution = new EducationalInstitution(name, description, formOfEd, deadline, minAge, maxAge, rating, price);
        institutions.push_back(institution);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load for all TraditioalEd data
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::traditionalEd(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/TraditionalEd.txt");
    if(file.fail())
        cerr << "TraditionalEd file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string location = getline(file, line) ? line : "";
        int yearsOdEd = getline(file, line) ? stoi(line) : 0;
        double textbook = getline(file, line) ? stod(line) : 0;
        string type = getline(file, line) ? line : "";
        int classSize = getline(file, line) ? stoi(line) : 0;
        
        TraditionalEd* traditionalEd = new TraditionalEd(name, description, formOfEd, deadline, minAge, maxAge, rating, price, location, yearsOdEd, textbook, type, classSize);
        institutions.push_back(traditionalEd);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load for all ELearning data
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::eLearning(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/ELearning.txt");
    if(file.fail())
        cerr << "ELearning file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string level = getline(file, line) ? line : "";
        bool personalized = getline(file, line) ? stoi(line) : 0;
        double duration = getline(file, line) ? stod(line) : 0;
        double levelOfInteraction = getline(file, line) ? stod(line) : 0;
        
        ELearning* eLearning = new ELearning(name, description, formOfEd, deadline, minAge, maxAge, rating, price, level, personalized, duration, levelOfInteraction);
        institutions.push_back(eLearning);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load data for HighSchool
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::highSchool(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/HighSchool.txt");
    if(file.fail())
        cerr << "HighSchool file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string location = getline(file, line) ? line : "";
        int yearsOdEd = getline(file, line) ? stoi(line) : 0;
        double textbook = getline(file, line) ? stod(line) : 0;
        string type = getline(file, line) ? line : "";
        int classSize = getline(file, line) ? stoi(line) : 0;
        string concentration = getline(file, line) ? line : "";
        string electives = getline(file, line) ? line : "";
        string language = getline(file, line) ? line : "";
        string tripLoc = getline(file, line) ? line : "";
        double transport = getline(file, line) ? stod(line) : 0;
        double summerProgram = getline(file, line) ? stod(line) : 0;
        
        HighSchool* highSchool = new HighSchool(name, description, formOfEd, deadline, minAge, maxAge, rating, price, location, yearsOdEd, textbook, type, classSize, concentration, electives, language, tripLoc, transport, summerProgram);
        institutions.push_back(highSchool);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load data for university
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::university(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/University.txt");
    if(file.fail())
        cerr << "University file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string location = getline(file, line) ? line : "";
        int yearsOdEd = getline(file, line) ? stoi(line) : 0;
        double textbook = getline(file, line) ? stod(line) : 0;
        string type = getline(file, line) ? line : "";
        int classSize = getline(file, line) ? stoi(line) : 0;
        string major = getline(file, line) ? line : "";
        string degree = getline(file, line) ? line : "";
        string amentities = getline(file, line) ? line : "";
        string mealPlan = getline(file, line) ? line : "";
        string activityFee = getline(file, line) ? line : "";
        string housing = getline(file, line) ? line : "";
        double insurance = getline(file, line) ? stod(line) : 0;
        
        University* university = new University(name, description, formOfEd, deadline, minAge, maxAge, rating, price, location, yearsOdEd, textbook, type, classSize, major, degree, insurance, mealPlan, activityFee, housing, amentities);
        institutions.push_back(university);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load data for OnlineCourse
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::onlineCourse(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/OnlineCourse.txt");
    if(file.fail())
        cerr << "OnlineCourse file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string level = getline(file, line) ? line : "";
        bool personalized = getline(file, line) ? stoi(line) : 0;
        double duration = getline(file, line) ? stod(line) : 0;
        double levelOfInteraction = getline(file, line) ? stod(line) : 0;
        bool certificate = getline(file, line) ? stoi(line) : 0;
        string resources = getline(file, line) ? line : "";
        
        
        OnlineCourse* onlineCourse = new OnlineCourse(name, description, formOfEd, deadline, minAge, maxAge, rating, price, level, personalized, duration, levelOfInteraction, certificate, resources);
        institutions.push_back(onlineCourse);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load data for Application
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::application(vector<EducationalInstitution*> &institutions){
    string line;
    ifstream file;
    file.open("Text_Files/Application.txt");
    if(file.fail())
        cerr << "Application file failed to open" << endl;
    
    while(!file.eof()){
        string name = getline(file, line) ? line : "";
        string description = getline(file, line) ? line : "";
        string formOfEd = getline(file, line) ? line : "";
        string deadline = getline(file, line) ? line : "";
        int minAge = getline(file, line) ? stoi(line) : 0;
        int maxAge = getline(file, line) ? stoi(line) : 0;
        double rating = getline(file, line) ? stod(line) : 0;
        double price = getline(file, line) ? stod(line) : 0;
        string level = getline(file, line) ? line : "";
        bool personalized = getline(file, line) ? stoi(line) : 0;
        double duration = getline(file, line) ? stod(line) : 0;
        double levelOfInteraction = getline(file, line) ? stod(line) : 0;
        string review = getline(file, line) ? line : "";
        string compatibility = getline(file, line) ? line : "";
        string plan = getline(file, line) ? line : "";
        int month = getline(file, line) ? stoi(line) : 0;
        double subscription = getline(file, line) ? stod(line) : 0;
        
        double size = getline(file, line) ? stod(line) : 0;
        
        
        Application* application = new Application(name, description, formOfEd, deadline, minAge, maxAge, rating, price, level, personalized, duration, levelOfInteraction, review,compatibility, plan,subscription,size,month);
        institutions.push_back(application);
        
        getline(file, line);
    }
    
    file.close();
}

/*
 * Load data for all
 *
 *@param vector<EducationalInstitution*> &institutions
 */
void DataStore::getData(vector<EducationalInstitution*> &institutions){
    
    educationalInstitution(institutions);
    traditionalEd(institutions);
    eLearning(institutions);
    highSchool(institutions);
    university(institutions);
    onlineCourse(institutions);
    application(institutions);
}
