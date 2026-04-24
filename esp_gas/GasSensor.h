#ifndef GAS_SENSOR_H
#define GAS_SENSOR_H

class GasSensor {
  private:
    int pin;
    int samples;

  public:
    GasSensor(int pin, int samples = 50);

    int read();
};

#endif