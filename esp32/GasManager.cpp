#include "GasManager.h"

void GasManager::update(int newValue) {
  value = newValue;
}

int GasManager::getValue() {
  return value;
}

bool GasManager::isDanger(int threshold) {
  return value > threshold;
}