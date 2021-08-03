//
// Created by Alex on 03/08/2021.
//

#ifndef LISTONIC_OBSERVER_H
#define LISTONIC_OBSERVER_H

class Observer{
public:
    virtual ~Observer()=0;
    virtual void Update()=0;
};



#endif //LISTONIC_OBSERVER_H
