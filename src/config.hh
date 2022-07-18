#include <string>

class Configuration {
public:
  int update_interval_ms;
  std::string ssid;
  std::string passphrase;
  std::string hassio_key;
};
