
@protocol NSCopying, NSCoding;
@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {

    CALayer* _target;
    CAAnimation* _animation;
    NSString* _key;
    BOOL _enabled;
}
@property (atomic, assign, readwrite, getter=isEnabled) NSNumber* enabled;
@property (nonatomic, weak, readwrite) CALayer* target;
@property (nonatomic, retain, readwrite) CAAnimation* animation;
@property (nonatomic, copy, readwrite) NSString* key;
@property (nonatomic, assign, readwrite) NSNumber* beginTime;
@property (nonatomic, assign, readwrite) NSNumber* duration;
 + (void) CAMLParserStartElement:(id)a;

 - (id) target;
 - (void) setKey:(id)a ;
 - (double) duration;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (void) setTarget:(id)a ;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) key;
 - (id) animation;
 - (void) CAMLParser:(id)a setValue:(id)b forKey:(id)c ;
 - (void) encodeWithCAMLWriter:(id)a ;
 - (id) CAMLTypeForKey:(id)a ;
 - (void) setAnimation:(id)a ;
 - (void) setBeginTime:(double)a ;
 - (void) setDuration:(double)a ;
 - (double) beginTime;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;


@end
