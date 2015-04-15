
@protocol NSSecureCoding;
@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {

    i _stage;
    d _radius;
    d _timestamp;
    q _pathIndex;
    q _forcedKeyCode;
    {CGPoint="x"d"y"d} _location;
}
@property (nonatomic, assign, readonly) NSNumber* stage;
@property (nonatomic, assign, readonly) NSNumber* location;
@property (nonatomic, assign, readonly) NSNumber* radius;
@property (nonatomic, assign, readonly) NSNumber* timestamp;
@property (nonatomic, assign, readonly) NSNumber* pathIndex;
@property (nonatomic, assign, readonly) NSNumber* forcedKeyCode;
 + (BOOL) supportsSecureCoding;
 + (id) touchEventWithStage:(i)alocation:({CGPoint=dd})bradius:(d)ctimestamp:(d)dpathIndex:(q)eforcedKeyCode:(q)f;

 - (id) description;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithStage:(i)alocation:({CGPoint=dd})bradius:(d)ctimestamp:(d)dpathIndex:(q)eforcedKeyCode:(q)f;
 - (i) stage;
 - ({CGPoint=dd}) location;
 - (d) radius;
 - (d) timestamp;
 - (q) pathIndex;
 - (q) forcedKeyCode;


@end
