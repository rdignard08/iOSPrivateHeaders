
@interface WebEvent : NSObject {

    int _type;
    double _timestamp;
    {CGPoint="x"d"y"d} _locationInWindow;
    NSString* _characters;
    NSString* _charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    BOOL _keyRepeating;
    BOOL _popupVariant;
    unsigned long long _keyboardFlags;
    unsigned short _keyCode;
    BOOL _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray* _touchLocations;
    NSArray* _touchIdentifiers;
    NSArray* _touchPhases;
    BOOL _isGesture;
    float _gestureScale;
    float _gestureRotation;
    BOOL _wasHandled;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, assign, readonly) NSNumber* timestamp;
@property (nonatomic, assign, readonly) NSNumber* locationInWindow;
@property (nonatomic, retain, readonly) NSString* characters;
@property (nonatomic, retain, readonly) NSString* charactersIgnoringModifiers;
@property (nonatomic, assign, readonly) NSNumber* modifierFlags;
@property (nonatomic, assign, readonly, getter=isKeyRepeating) NSNumber* keyRepeating;
@property (nonatomic, assign, readonly, getter=isPopupVariant) NSNumber* popupVariant;
@property (nonatomic, assign, readonly) NSNumber* keyboardFlags;
@property (nonatomic, assign, readonly) NSNumber* keyCode;
@property (nonatomic, assign, readonly, getter=isTabKey) NSNumber* tabKey;
@property (nonatomic, assign, readonly) NSNumber* characterSet;
@property (nonatomic, assign, readonly) NSNumber* deltaX;
@property (nonatomic, assign, readonly) NSNumber* deltaY;
@property (nonatomic, assign, readonly) NSNumber* touchCount;
@property (nonatomic, retain, readonly) NSArray* touchLocations;
@property (nonatomic, retain, readonly) NSArray* touchIdentifiers;
@property (nonatomic, retain, readonly) NSArray* touchPhases;
@property (nonatomic, assign, readonly) NSNumber* isGesture;
@property (nonatomic, assign, readonly) NSNumber* gestureScale;
@property (nonatomic, assign, readonly) NSNumber* gestureRotation;
@property (nonatomic, assign, readwrite) NSNumber* wasHandled;

 - (id) description;
 - (id) .cxx_construct;
 - (void) dealloc;
 - (id) initWithKeyEventType:(int)atimeStamp:(double)bcharacters:(id)ccharactersIgnoringModifiers:(id)dmodifiers:(unsigned int)eisRepeating:(BOOL)fwithFlags:(unsigned long long)gkeyCode:(unsigned short)hisTabKey:(BOOL)icharacterSet:(int)j;
 - (id) initWithMouseEventType:(int)atimeStamp:(double)blocation:({CGPoint=dd})c;
 - (BOOL) wasHandled;
 - (id) initWithScrollWheelEventWithTimeStamp:(double)alocation:({CGPoint=dd})bdeltaX:(float)cdeltaY:(float)d;
 - (id) initWithTouchEventType:(int)atimeStamp:(double)blocation:({CGPoint=dd})cmodifiers:(unsigned int)dtouchCount:(unsigned int)etouchLocations:(id)ftouchIdentifiers:(id)gtouchPhases:(id)hisGesture:(BOOL)igestureScale:(float)jgestureRotation:(float)k;
 - (int) type;
 - (int) characterSet;
 - (BOOL) isPopupVariant;
 - (double) timestamp;
 - (BOOL) isTabKey;
 - (unsigned long long) keyboardFlags;
 - (unsigned short) keyCode;
 - (float) deltaX;
 - (float) deltaY;
 - (void) setWasHandled:(BOOL)a;
 - ({CGPoint=dd}) locationInWindow;
 - (id) charactersIgnoringModifiers;
 - (float) gestureScale;
 - (float) gestureRotation;
 - (BOOL) isGesture;
 - (unsigned int) touchCount;
 - (id) touchIdentifiers;
 - (id) touchLocations;
 - (id) touchPhases;
 - (unsigned int) modifierFlags;
 - (id) characters;
 - (BOOL) isKeyRepeating;
 - (id) _touchPhaseDescription:(int)a;
 - (id) _characterSetDescription;
 - (id) _touchLocationsDescription:(id)a;
 - (id) _touchIdentifiersDescription;
 - (id) _touchPhasesDescription;
 - (id) _typeDescription;
 - (id) _eventDescription;
 - (id) initWithKeyEventType:(int)atimeStamp:(double)bcharacters:(id)ccharactersIgnoringModifiers:(id)dmodifiers:(unsigned int)eisRepeating:(BOOL)fisPopupVariant:(BOOL)gkeyCode:(unsigned short)hisTabKey:(BOOL)icharacterSet:(int)j;
 - (id) _modiferFlagsDescription;


@end
