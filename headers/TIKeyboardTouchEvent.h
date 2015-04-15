
@protocol NSSecureCoding;
@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {

    int _stage;
    double _radius;
    double _timestamp;
    long long _pathIndex;
    long long _forcedKeyCode;
    {CGPoint="x"d"y"d} _location;
}
@property (nonatomic, assign, readonly) NSNumber* stage;
@property (nonatomic, assign, readonly) NSNumber* location;
@property (nonatomic, assign, readonly) NSNumber* radius;
@property (nonatomic, assign, readonly) NSNumber* timestamp;
@property (nonatomic, assign, readonly) NSNumber* pathIndex;
@property (nonatomic, assign, readonly) NSNumber* forcedKeyCode;
 + (BOOL) supportsSecureCoding;
 + (id) touchEventWithStage:(int)alocation:({CGPoint=dd})bradius:(double)ctimestamp:(double)dpathIndex:(long long)eforcedKeyCode:(long long)f;

 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithStage:(int)a location:({CGPoint=dd})b radius:(double)c timestamp:(double)d pathIndex:(long long)e forcedKeyCode:(long long)f ;
 - (int) stage;
 - ({CGPoint=dd}) location;
 - (double) radius;
 - (double) timestamp;
 - (long long) pathIndex;
 - (long long) forcedKeyCode;


@end
