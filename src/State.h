//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_STATE_H
#define PROJECT_STATE_H

template<class T>
  class State{
    T state;
    double cost;
    State<T> cameFrom;
  public:
    State(T state);
    void setCost(double cost);
    bool equal(State<T>other_state);
    double getCost();
    ~State();
    void setFather(State<T>father);
};




#endif //PROJECT_STATE_H
