#include <iostream>

#include "SingleInstance.h"

using namespace std;

SingleInstance * SingleInstance::mSingleInstance = NULL;

SingleInstance::SingleInstance() {}

SingleInstance *SingleInstance::getSingleIntance() {
    if (!mSingleInstance) {
       cout << "mSingleInstance == null and new SingleInstance()" << endl;
       mSingleInstance = new SingleInstance();
    }

    return mSingleInstance;
}
