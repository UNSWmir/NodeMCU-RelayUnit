const String    CHANNEL_ID    = "XXXXXXXXX"; // The Readiness.io channel ID
const String    SENSOR_ID     = "XXXXXXXXX"; // Your AgriWebb or made up sensor ID
const String    TOPIC         = "solenoid-valve"; // The type of sensor or name of the data your sending
const String    VERSION       = "1";
const String    FORMAT        = "";

const char*     WIFI_SSID     = "XXXXXXXXX"; // Your WiFi SSID / name
const char*     WIFI_PASS     = "XXXXXXXXX"; // Your WiFi password

const uint16_t  UPDATE_RATE   = 5; // How long to wait between sending data back (in seconds)
const uint8_t   TIMEZONE_OFFSET = 10; // The timezone the sensor is located in (eg. 10 for GMT)

const String    LISTEN_TOPIC  = "water-level";  // the name of the sensor that you are listening to
                                                // make your solenoid valve change.
