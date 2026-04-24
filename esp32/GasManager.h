#ifndef GAS_MANAGER_H
#define GAS_MANAGER_H

class GasManager {
  private:
    int value;

  public:
    void update(int newValue);
    int getValue();
    bool isDanger(int threshold);
};

#endif