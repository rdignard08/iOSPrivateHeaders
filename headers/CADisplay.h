
@interface CADisplay : NSObject {

    ^v _impl;
}
@property (nonatomic, assign, readonly) NSArray* availableModes;
@property (nonatomic, retain, readwrite) CADisplayMode* currentMode;
@property (nonatomic, assign, readonly) CADisplayMode* preferredMode;
@property (nonatomic, copy, readwrite) NSString* colorMode;
@property (atomic, assign, readwrite) NSNumber* allowsVirtualModes;
@property (nonatomic, assign, readonly) NSNumber* bounds;
@property (nonatomic, assign, readonly) NSNumber* frame;
@property (nonatomic, assign, readonly) NSNumber* safeBounds;
@property (nonatomic, assign, readonly) NSString* name;
@property (nonatomic, assign, readonly) NSString* deviceName;
@property (atomic, assign, readonly) NSNumber* displayId;
@property (atomic, assign, readonly) NSNumber* seed;
@property (atomic, assign, readonly) NSNumber* connectionSeed;
@property (atomic, assign, readonly) NSString* uniqueId;
@property (atomic, assign, readonly, getter=isSupported) NSNumber* supported;
@property (atomic, assign, readonly) NSNumber* tag;
@property (atomic, assign, readonly, getter=isExternal) NSNumber* external;
@property (atomic, assign, readonly) NSNumber* refreshRate;
@property (atomic, assign, readonly, getter=isOverscanned) NSNumber* overscanned;
@property (nonatomic, copy, readwrite) NSString* overscanAdjustment;
@property (atomic, assign, readonly) NSNumber* overscanAmount;
@property (atomic, assign, readonly, getter=isCloned) NSNumber* cloned;
@property (atomic, assign, readonly, getter=isCloningSupported) NSNumber* cloningSupported;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) displays;
 + (id) mainDisplay;
 + (id) TVOutDisplay;

 - (id) description;
 - (id) name;
 - (id) currentMode;
 - (id) availableModes;
 - (BOOL) isOverscanned;
 - (id) overscanAdjustment;
 - (void) setOverscanAdjustment:(id)a ;
 - (double) overscanAmount;
 - (double) refreshRate;
 - (BOOL) isCloningSupported;
 - (id) preferredMode;
 - (void) setCurrentMode:(id)a ;
 - (void) _invalidate;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (unsigned int) displayId;
 - (BOOL) isExternal;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (unsigned int) seed;
 - (id) deviceName;
 - (id) _initWithDisplay:(^{Display=^^?@^{__CFString}^{__CFString}III^{__CFString}{ModeSet=I[1I]}iii{Bounds=iiii}{Bounds=iiii}IIfiBBBBBIdBB})a ;
 - (void) update;
 - (unsigned int) connectionSeed;
 - (id) colorMode;
 - (void) setColorMode:(id)a ;
 - (BOOL) allowsVirtualModes;
 - (void) setAllowsVirtualModes:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) safeBounds;
 - (BOOL) isSupported;
 - (BOOL) isCloned;
 - (long long) tag;
 - (id) uniqueId;


@end
