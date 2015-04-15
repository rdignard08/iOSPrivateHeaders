
@protocol NSCopying;
@interface UIStatusBarComposedData : NSObject <NSCopying> {

    {?="itemIsEnabled"[26B]"timeString"[64c]"gsmSignalStrengthRaw"i"gsmSignalStrengthBars"i"serviceString"[100c]"serviceCrossfadeString"[100c]"serviceImages"[2[100c]]"operatorDirectory"[1024c]"serviceContentType"I"wifiSignalStrengthRaw"i"wifiSignalStrengthBars"i"dataNetworkType"I"batteryCapacity"i"batteryState"I"batteryDetailString"[150c]"bluetoothBatteryCapacity"i"thermalColor"i"thermalSunlightMode"b1"slowActivity"b1"syncActivity"b1"activityDisplayId"[256c]"bluetoothConnected"b1"displayRawGSMSignal"b1"displayRawWifiSignal"b1"locationIconType"b1"quietModeInactive"b1"tetheringConnectionCount"I} _rawData;
    [31B] _itemEnabled;
    NSString* _doubleHeightStatus;
}
@property (nonatomic, assign, readonly) NSNumber* rawData;
@property (nonatomic, copy, readwrite) NSString* doubleHeightStatus;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I}) rawData;
 - (BOOL) isItemEnabled:(int)a ;
 - (void) setItem:(int)a enabled:(BOOL)b ;
 - (id) doubleHeightStatus;
 - (id) initWithRawData:(r^{?=[26B][64c]ii[100c][100c][2[100c]][1024c]IiiIiI[150c]iib1b1b1[256c]b1b1b1b1b1I})a ;
 - (void) setDoubleHeightStatus:(id)a ;


@end
