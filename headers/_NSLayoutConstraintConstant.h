
@protocol NSCoding, NSCopying;
@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

    @"NSString" _symbolicValue;
    d _numericValue;
}
@property (nonatomic, copy, readonly) NSString* symbolicValue;
@property (nonatomic, assign, readonly) NSNumber* numericValue;
 + (id) constantWithSymbolicValue:(id)anumericValue:(d)b;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) initWithSymbolicValue:(id)anumericValue:(d)b;
 - (id) symbolicValue;
 - (d) numericValue;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
