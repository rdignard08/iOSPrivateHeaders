
@interface CAWindowServerDisplay : NSObject {

    ^v _impl;
}
@property (atomic, assign, readonly) NSNumber* bounds;
@property (atomic, assign, readwrite) NSNumber* scale;
@property (atomic, assign, readonly) NSString* name;
@property (atomic, assign, readonly) NSString* deviceName;
@property (atomic, assign, readonly) NSNumber* displayId;
@property (atomic, assign, readonly) NSString* uniqueId;
@property (atomic, assign, readonly) NSNumber* rendererFlags;
@property (atomic, assign, readonly) NSSet* clones;
@property (atomic, assign, readonly) CAWindowServerDisplay* cloneMaster;
@property (atomic, assign, readwrite, getter=isBlanked) NSNumber* blanked;
@property (atomic, copy, readwrite) NSString* orientation;
@property (atomic, assign, readwrite) NSNumber* overscanAmount;
@property (atomic, assign, readwrite) NSNumber* invertsColors;
@property (atomic, assign, readwrite, getter=isGrayscale) NSNumber* grayscale;
@property (atomic, assign, readwrite) NSNumber* contrast;
@property (atomic, assign, readwrite) NSNumber* maximumBrightness;
@property (atomic, assign, readwrite) NSNumber* minimumRefreshRate;
@property (atomic, assign, readwrite) NSNumber* maximumRefreshRate;
@property (atomic, assign, readwrite) NSNumber* idealRefreshRate;
@property (atomic, assign, readwrite) NSNumber* usesPreferredModeRefreshRate;
@property (nonatomic, copy, readwrite) NSString* colorMode;
@property (atomic, assign, readwrite) NSNumber* allowsVirtualModes;
@property (atomic, assign, readwrite, getter=isMirroringEnabled) NSNumber* mirroringEnabled;
@property (atomic, assign, readwrite) NSNumber* tag;
@property (atomic, copy, readwrite) NSString* TVMode;
@property (atomic, copy, readwrite) NSString* TVSignalType;
@property (atomic, assign, readwrite, getter=isSecure) NSNumber* secure;

 - (double) scale;
 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (id) name;
 - (void) setContrast:(float)a ;
 - (void) setSecure:(BOOL)a ;
 - (void) setTag:(long long)a ;
 - (double) overscanAmount;
 - (float) contrast;
 - (BOOL) isSecure;
 - (unsigned int) displayId;
 - (id) orientation;
 - (void) setOrientation:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (void) setScale:(double)a ;
 - (id) deviceName;
 - (void) update;
 - (id) colorMode;
 - (void) setColorMode:(id)a ;
 - (BOOL) allowsVirtualModes;
 - (void) setAllowsVirtualModes:(BOOL)a ;
 - (void) setMirroringEnabled:(BOOL)a ;
 - (BOOL) isMirroringEnabled;
 - (unsigned int) rendererFlags;
 - (unsigned int) clientPortOfContextId:(unsigned int)a ;
 - (unsigned int) taskPortOfContextId:(unsigned int)a ;
 - (void) addClone:(id)a options:(id)b ;
 - (id) _initWithCADisplayServer:(^{Server=^^?{SpinLock={?=i}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}^{Display}^{__CFString}^{ContextItem}QQ{SpinLock={?=i}}^{PendingOperation}^{Context}^{Shape}I^{Context}^{Renderer}ddb1b1b1})a ;
 - (unsigned int) contextIdAtPosition:({CGPoint=dd})a ;
 - (unsigned int) clientPortAtPosition:({CGPoint=dd})a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toContextId:(unsigned int)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromContextId:(unsigned int)b ;
 - (id) clones;
 - (void) addClone:(id)a ;
 - (void) removeClone:(id)a ;
 - (void) removeAllClones;
 - (id) cloneMaster;
 - (void) setBlanked:(BOOL)a ;
 - (BOOL) isBlanked;
 - (void) willUnblank;
 - (void) setOverscanAmount:(double)a ;
 - (void) setInvertsColors:(BOOL)a ;
 - (BOOL) invertsColors;
 - (void) setGrayscale:(BOOL)a ;
 - (BOOL) isGrayscale;
 - (void) setMaximumBrightness:(float)a ;
 - (float) maximumBrightness;
 - (void) setMinimumRefreshRate:(float)a ;
 - (float) minimumRefreshRate;
 - (void) setMaximumRefreshRate:(float)a ;
 - (float) maximumRefreshRate;
 - (void) setIdealRefreshRate:(float)a ;
 - (float) idealRefreshRate;
 - (void) setUsesPreferredModeRefreshRate:(BOOL)a ;
 - (BOOL) usesPreferredModeRefreshRate;
 - (void) setTVMode:(id)a ;
 - (id) TVMode;
 - (void) setTVSignalType:(id)a ;
 - (id) TVSignalType;
 - (long long) tag;
 - (id) uniqueId;


@end
