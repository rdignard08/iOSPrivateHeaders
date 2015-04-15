
@interface BSPlatform : NSObject {

    NSString _productVersion;
    NSString _productBuildVersion;
    NSString _productHardwareModel;
    NSString _productType;
    NSString _productClass;
    NSString _uniqueDeviceIdentifier;
    NSString _localizedProductName;
    BOOL _hasGasGauge;
    BOOL _isInternalInstall;
    BOOL _isMultiCore;
}
@property (nonatomic, copy, readonly) NSString* productVersion;
@property (nonatomic, copy, readonly) NSString* productBuildVersion;
@property (nonatomic, copy, readonly) NSString* productType;
@property (nonatomic, copy, readonly) NSString* productHardwareModel;
@property (nonatomic, copy, readonly) NSString* productClass;
@property (nonatomic, copy, readonly) NSString* localizedProductName;
@property (nonatomic, copy, readonly) NSString* uniqueDeviceIdentifier;
@property (nonatomic, assign, readonly, getter=isInternalInstall) NSNumber* internalInstall;
@property (nonatomic, assign, readonly, getter=isMultiCore) NSNumber* multiCore;
@property (nonatomic, assign, readonly) NSNumber* hasGasGauge;
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (id) productVersion;
 - (id) productBuildVersion;
 - (id) productHardwareModel;
 - (id) productType;
 - (id) productClass;
 - (id) uniqueDeviceIdentifier;
 - (id) localizedProductName;
 - (BOOL) hasGasGauge;
 - (BOOL) isInternalInstall;
 - (BOOL) isMultiCore;


@end
