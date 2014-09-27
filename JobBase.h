#ifndef _JOB_BASE_H
#define _JOB_BASE_H

#include <string>

using namespace std;

class JobBase {
public:
    string mJobContent;
    int mMonthSalary;

    JobBase();
    JobBase(string jobContent, int monthSalary);
    JobBase(JobBase &copyJobBase);
    ~JobBase();
    virtual void print();
};
#endif
