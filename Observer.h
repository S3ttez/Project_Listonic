//
// Created by Alex on 03/08/2021.
//

#ifndef MAIN_CPP_OBSERVER_H
#define MAIN_CPP_OBSERVER_H


class Observer {
public:
    virtual void Update() = 0;
protected:
    virtual ~Observer() = default;
};


#endif //MAIN_CPP_OBSERVER_H
