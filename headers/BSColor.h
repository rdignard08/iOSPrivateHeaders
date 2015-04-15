
@protocol NSCopying, NSSecureCoding, BSXPCCoding;
@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

    double _red;
    double _green;
    double _blue;
    double _alpha;
}
@property (nonatomic, assign, readonly) NSNumber* red;
@property (nonatomic, assign, readonly) NSNumber* green;
@property (nonatomic, assign, readonly) NSNumber* blue;
@property (nonatomic, assign, readonly) NSNumber* alpha;
 + (BOOL) supportsSecureCoding;
 + (id) colorWithRed:(double)agreen:(double)bblue:(double)calpha:(double)d;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (void) encodeWithXPCDictionary:(id)a ;
 - (id) initWithXPCDictionary:(id)a ;
 - (double) red;
 - (double) green;
 - (double) blue;
 - (double) alpha;
 - (BOOL) isEqualToColor:(id)a ;


@end
