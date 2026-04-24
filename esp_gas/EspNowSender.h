#ifndef ESPNOW_SENDER_H
#define ESPNOW_SENDER_H

#include <esp_now.h>

typedef struct {
  int gasValue;
} SensorData;

class EspNowSender {
  private:
    uint8_t address[6];

  public:
    EspNowSender(const uint8_t *addr);

    void begin(int channel);
    bool send(int value);
};

#endif