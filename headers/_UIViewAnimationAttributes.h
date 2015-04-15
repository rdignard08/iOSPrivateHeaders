
@protocol NSSecureCoding;
@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

    double _duration;
    double _delay;
    unsigned long long _options;
    long long _curve;
}
@property (nonatomic, assign, readonly, getter=_duration) NSNumber* duration;
@property (nonatomic, assign, readonly, getter=_delay) NSNumber* delay;
@property (nonatomic, assign, readonly, getter=_curve) NSNumber* curve;
 + (BOOL) supportsSecureCoding;

 - (double) _duration;
 - (double) _delay;
 - (long long) _curve;
 - (long long) curve;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
