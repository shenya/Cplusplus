#ifndef _SINGLE_INSTANCE_H
#define _SINGLE_INSTANCE_H

#include <iostream>

using namespace std;

class SingleInstance {
private:
    SingleInstance();
    static SingleInstance *mSingleInstance;
    class Help {
    public:
        ~Help() {
            if (mSingleInstance) {
                cout << "delete mSingleInstance" << endl;
                delete SingleInstance::mSingleInstance;
            }
        }
    };

    static Help help;
public:
    static SingleInstance *getSingleIntance();
};
#endif
