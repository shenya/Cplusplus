#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "JobBase.h"
#include "SingleInstance.h"

using namespace std;

class Teacther : public JobBase {
public: Teacther() {}

public:
#if 1
    void print() {
        cout<<"teacther"<<endl;
    }
#endif
};

void vector_study(void)
{
    vector<int> vec;

    for (vector<int>::size_type ix = 0; ix < 5; ix++) {
        vec.push_back(ix);
    }

    for (vector<int>::size_type ix = 0; ix != vec.size(); ix++) {
        cout << vec[ix] << " ";
    }
    cout << endl;

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
        cout << *iter;
    }
    cout << endl;
}

void string_study(void)
{
    string str("hello world");

    cout << str << endl;
    for (string::size_type ix = 0; ix != str.size(); ix++) {
        cout << str[ix] << endl;
    }
}

void map_study()
{
    map <string, int> word_count;
    word_count["Anna"] = 1;
    cout << word_count["Anna"] << endl;

    word_count.insert(map<string, int>::value_type("Second", 2));
    cout << word_count["Second"] <<endl;
}

void virtual_study() {
    JobBase *job;
    job = new Teacther();
    job->print();

    job = new JobBase();
    job->print();
}
int main(void)
{
      SingleInstance * singleInstace = SingleInstance::getSingleIntance();
      if (singleInstace) {
          cout << "singleInstace != null" << endl;
      }
      SingleInstance *singleInstace2 = SingleInstance::getSingleIntance();
      if (singleInstace2) {
          cout << "singleInstace2 != null" << endl;
      }
//    virtual_study();
//    JobBase job("base job", 1000);
//    cout << job << endl;
//    cin >> job;
//    cout << job << endl;
//    JobBase *job_test = new JobBase();
//    cout << job_test->mJobContent << job_test->mMonthSalary << endl;
//   map_study();
//    string_study();
//    vector_study();
#if 0
    JobBase job("base job", 1000);
    Teacther *teacther;

    job.print();
    cout<<"content: "<<job.mJobContent<<" salary:"<<job.mMonthSalary<<endl;

    JobBase copyJobBase(job);

    cout<<"content-copy: "<<copyJobBase.mJobContent<<" salary:"<<copyJobBase.mMonthSalary<<endl;
    teacther = new Teacther();
    teacther->print();
    cout<<"hello world"<<endl;
    cout<<"hello world again"<<endl;
#endif
    return 0;
}
