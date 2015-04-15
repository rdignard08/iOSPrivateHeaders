
@interface UIStatusBarServerThread : NSThread {

    NSMutableArray* _clientPorts;
    NSMutableArray* _publishers;
    {?="itemIsEnabled"[26B]"timeString"[64c]"gsmSignalStrengthRaw"i"gsmSignalStrengthBars"i"serviceString"[100c]"serviceCrossfadeString"[100c]"serviceImages"[2[100c]]"operatorDirectory"[1024c]"serviceContentType"I"wifiSignalStrengthRaw"i"wifiSignalStrengthBars"i"dataNetworkType"I"batteryCapacity"i"batteryState"I"batteryDetailString"[150c]"bluetoothBatteryCapacity"i"thermalColor"i"thermalSunlightMode"b1"slowActivity"b1"syncActivity"b1"activityDisplayId"[256c]"bluetoothConnected"b1"displayRawGSMSignal"b1"displayRawWifiSignal"b1"locationIconType"b1"quietModeInactive"b1"tetheringConnectionCount"I} _statusBarData;
    {?="itemIsEnabled"[26B]"timeString"[64c]"gsmSignalStrengthRaw"i"gsmSignalStrengthBars"i"serviceString"[100c]"serviceCrossfadeString"[100c]"serviceImages"[2[100c]]"operatorDirectory"[1024c]"serviceContentType"I"wifiSignalStrengthRaw"i"wifiSignalStrengthBars"i"dataNetworkType"I"batteryCapacity"i"batteryState"I"batteryDetailString"[150c]"bluetoothBatteryCapacity"i"thermalColor"i"thermalSunlightMode"b1"slowActivity"b1"syncActivity"b1"activityDisplayId"[256c]"bluetoothConnected"b1"displayRawGSMSignal"b1"displayRawWifiSignal"b1"locationIconType"b1"quietModeInactive"b1"tetheringConnectionCount"I} _composedStatusBarData;
    {?="overrideItemIsEnabled"[26B]"overrideTimeString"b1"overrideGsmSignalStrengthRaw"b1"overrideGsmSignalStrengthBars"b1"overrideServiceString"b1"overrideServiceImages"b2"overrideOperatorDirectory"b1"overrideServiceContentType"b1"overrideWifiSignalStrengthRaw"b1"overrideWifiSignalStrengthBars"b1"overrideDataNetworkType"b1"disallowsCellularDataNetworkTypes"b1"overrideBatteryCapacity"b1"overrideBatteryState"b1"overrideBatteryDetailString"b1"overrideBluetoothBatteryCapacity"b1"overrideThermalColor"b1"overrideSlowActivity"b1"overrideActivityDisplayId"b1"overrideBluetoothConnected"b1"overrideDisplayRawGSMSignal"b1"overrideDisplayRawWifiSignal"b1"values"{?="itemIsEnabled"[26B]"timeString"[64c]"gsmSignalStrengthRaw"i"gsmSignalStrengthBars"i"serviceString"[100c]"serviceCrossfadeString"[100c]"serviceImages"[2[100c]]"operatorDirectory"[1024c]"serviceContentType"I"wifiSignalStrengthRaw"i"wifiSignalStrengthBars"i"dataNetworkType"I"batteryCapacity"i"batteryState"I"batteryDetailString"[150c]"bluetoothBatteryCapacity"i"thermalColor"i"thermalSunlightMode"b1"slowActivity"b1"syncActivity"b1"activityDisplayId"[256c]"bluetoothConnected"b1"displayRawGSMSignal"b1"displayRawWifiSignal"b1"locationIconType"b1"quietModeInactive"b1"tetheringConnectionCount"I}} _overrides;
    ^{__CFDictionary=} _doubleHeightStatusStrings;
    ^{__CFDictionary=} _glowAnimationStates;
    NSMutableDictionary* _glowAnimationEndTimes;
    BOOL _composedStatusBarDataValid;
}

 - (void) main;
 - (id) _publisherForPort:(unsigned int)a;
 - (void) _broadcastStatusBarDataWithActions:(int)a;
 - (void) _broadcastStyleOverrides;
 - (^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}) _statusBarData;
 - (int) _styleOverrides;
 - (void) _setAnimationEndTimesForOverrides:(int)a;
 - (void) _removeAnimationEndTimesForOverrides:(int)a;
 - (double) _glowAnimationEndTimeForStyle:(long long)a;
 - (void) _addClient:(unsigned int)a;
 - (void) _removeClient:(^{__CFMachPort=})a;
 - (void) _removePublisher:(^{__CFMachPort=})a;
 - (^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}}) _statusBarOverrideData;
 - (void) _postStatusBarData:(^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})aactions:(int)b;
 - (void) _addStyleOverrides:(int)aforPublisher:(id)b;
 - (void) _removeStyleOverrides:(int)aforPublisher:(id)b;
 - (BOOL) _glowAnimationStateForStyle:(long long)a;
 - (void) _postGlowAnimationState:(BOOL)aforStyle:(long long)b;
 - (id) _doubleHeightStatusStringForStyle:(long long)a;
 - (void) _postDoubleHeightStatus:(char*)aforStyle:(long long)b;
 - (void) _postStatusBarOverrideData:(^{?=[26B]b1b1b1b1b2b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}})a;
 - (BOOL) _permanentizeStatusBarOverrideData;
 - (void) _addStatusBarItem:(int)aforPublisher:(id)b;
 - (void) _removeStatusBarItem:(int)aforPublisher:(id)b;


@end
