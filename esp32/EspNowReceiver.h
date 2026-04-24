#ifndef ESPNOW_RECEIVER_H
#define ESPNOW_RECEIVER_H

#include <esp_now.h>
#include "GasManager.h"

typedef struct {
  int gasValue;
} SensorData;

class EspNowReceiver {
  public:
    static void begin(GasManager* manager);

  private:
    static void onReceive(const esp_now_recv_info *info, const uint8_t *data, int len);
    static GasManager* gasManager;
};

#endif