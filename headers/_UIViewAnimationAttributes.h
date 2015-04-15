
@protocol NSSecureCoding;
@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

    d _duration;
    d _delay;
    Q _options;
    q _curve;
}
@property (nonatomic, assign, readonly, _duration) NSNumber* duration;
@property (nonatomic, assign, readonly, _delay) NSNumber* delay;
@property (nonatomic, assign, readonly, _curve) NSNumber* curve;
 + (BOOL) supportsSecureCoding;

 - (d) _duration;
 - (d) _delay;
 - (q) _curve;
 - (q) curve;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
