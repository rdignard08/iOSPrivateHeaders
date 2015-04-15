
@protocol NSCopying, NSSecureCoding, BSXPCCoding;
@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

    d _red;
    d _green;
    d _blue;
    d _alpha;
}
@property (nonatomic, assign, readonly) NSNumber* red;
@property (nonatomic, assign, readonly) NSNumber* green;
@property (nonatomic, assign, readonly) NSNumber* blue;
@property (nonatomic, assign, readonly) NSNumber* alpha;
 + (BOOL) supportsSecureCoding;
 + (id) colorWithRed:(d)agreen:(d)bblue:(d)calpha:(d)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (d) red;
 - (d) green;
 - (d) blue;
 - (d) alpha;
 - (BOOL) isEqualToColor:(id)a;


@end
