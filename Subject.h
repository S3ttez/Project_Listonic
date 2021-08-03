//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_SUBJECT_H
#define LISTONIC_SUBJECT_H

#include "Observer.h"

class Subject{
public:
    virtual void AddObserver(Observer* obs)=0;
    virtual void RemoveObserver(Observer* obs)=0;
    virtual void Notify()=0;

protected:
    virtual ~Subject();
    Subject(){};
};


#endif //LISTONIC_SUBJECT_H
