// // Copyright (c) NewSunRoad. All rights reserved.

#ifndef CONFIG_H
#define CONFIG_H

struct device_config
{
	const char* mqtt_server = "solSenseHub.azure-devices.net";                    //specify the mqtt_server
	const char* iot_hub = "SolSenseHub.azure-devices.net/";                        //specify iot endpoint
	int port = 8883;
	const char* id = "SolSense0072B5";                                          //device specific id
	const char* user = "SolSenseHub.azure-devices.net/SolSense0072B5";          //
	const char* pass = "SharedAccessSignature sr=solSenseHub.azure-devices.net%2Fdevices%2FSolSense0072B5&sig=zKjtYYFsUYwZGo1yVjgmg%2BmUC7WvV2V3WAtKFEvD7TI%3D&se=11487362127"; // 2/17/17
	const char* pub_id = "devices/SolSense0072B5/messages/events/";              //publish topic url
	const char* sub_id = "devices/SolSense0072B5/messages/devicebound/#";        //subscribe topic url
	const char* wifi_ssid = "SolSense";
	const char* wifi_pass = "BabySeamus";
} network_config;



#endif