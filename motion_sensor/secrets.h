/*
 * Copy this file to `secrets.h` and set the values below to configure your
 * (2.4Ghz) wifi network, MQTT server, MQTT topic, and OTA server
 */

/************ WIFI and MQTT CONNECTIONS ******************/

#define wifi_ssid "xxxx"
#define wifi_password "xxxxx"

#define mqtt_server "192.168.1.135"
#define mqtt_user "chris"
#define mqtt_password "pass"
#define mqtt_port 1883

/************* MQTT TOPICS (change these topics as you wish)  **************************/

#define motion_state_topic "motion/hall"
#define motion_set_topic "motion/hall/set"

/**************************** FOR OTA **************************************************/

#define SENSORNAME "hall_motion"
#define OTApassword ""
#define OTAport 8266
