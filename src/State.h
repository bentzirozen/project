//
// Created by bentzirozen on 1/4/19.
//

#ifndef PROJECT_STATE_H
#define PROJECT_STATE_H

template<class T>
  class State{
    T state;
    double cost;
    State<T>* cameFrom;
  public:
    //constructor with state
      State(T state) {
        this->state = state;
      }
      //default constructor
      State(){
        this->cost = 0;
    }
      void setCost(double cost) {
        this->cost = cost;
      }
      bool equals(State<T>* other_state) {
        return other_state->getState() == state;
      }
      void setFather(State<T>* father) {
        this->cameFrom = father;
      }
      double getCost() {
        return this->cost;
      }
      T getState(){
          return this->state;
      }
      void setState(T state){
          this->state = state;
      }
      State<T>*getFather(){
          return this->cameFrom;
    }

};




#endif //PROJECT_STATE_H
