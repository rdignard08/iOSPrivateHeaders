
@protocol NSCoding, NSCopying;
@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

    NSString _symbolicValue;
    double _numericValue;
}
@property (nonatomic, copy, readonly) NSString* symbolicValue;
@property (nonatomic, assign, readonly) NSNumber* numericValue;
 + (id) constantWithSymbolicValue:(id)anumericValue:(double)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) initWithSymbolicValue:(id)anumericValue:(double)b;
 - (id) symbolicValue;
 - (double) numericValue;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
