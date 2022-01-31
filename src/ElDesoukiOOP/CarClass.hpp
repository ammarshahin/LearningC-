#ifndef CAR_CLASS_H__
#define CAR_CLASS_H__

#include <iostream>

class CarClass
{
  private:
    std::string maker;
    int model;

  public:
    CarClass();
    CarClass(std::string mak, int mod);
    ~CarClass();
    void setMaker(std::string m);
    void setModel(int m);
    std::string getMaker();
    int getModel();
};

#endif   // !CAR_CLASS_H__