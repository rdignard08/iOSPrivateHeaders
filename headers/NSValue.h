
@protocol NSCopying, NSSecureCoding;
@interface NSValue : NSObject <NSCopying, NSSecureCoding> {

}
@property (atomic, assign, readonly) NSNumber* CATransform3DValue;
@property (atomic, assign, readonly) NSNumber* objCType;
 + (id) valueWithML3CollectionInfo:({?=qqC})a;
 + (id) valueWithML3NameOrder:({?=qq})a;
 + (id) valueWithCMTimeRange:({?={?=qiIq}{?=qiIq}})a;
 + (id) valueWithCMTime:({?=qiIq})a;
 + (id) valueWithCMTimeMapping:({?={?={?=qiIq}{?=qiIq}}{?={?=qiIq}{?=qiIq}}})a;
 + (id) valueWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) valueWithCGSize:({CGSize=dd})a;
 + (id) valueWithCGVector:({CGVector=dd})a;
 + (id) valueWithUIOffset:({UIOffset=dd})a;
 + (id) valueWithCGAffineTransform:({CGAffineTransform=dddddd})a;
 + (id) valueWithUIEdgeInsets:({UIEdgeInsets=dddd})a;
 + (id) valueWithCGPoint:({CGPoint=dd})a;
 + (id) _web_valueWithCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) valueWithCAPoint3D:({CAPoint3D=ddd})a;
 + (id) valueWithCATransform3D:({CATransform3D=dddddddddddddddd})a;
 + (id) valueWithCAColorMatrix:({CAColorMatrix=ffffffffffffffffffff})a;
 + (id) valueWithCGPoint:({CGPoint=dd})a;
 + (BOOL) supportsSecureCoding;
 + (id) valueWithRange:({_NSRange=QQ})a;
 + (id) valueWithBytes:(r^v)aobjCType:(r*)b;
 + (id) valueWithSize:({CGSize=dd})a;
 + (id) valueWithRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (id) valueWithPoint:({CGPoint=dd})a;
 + (id) value:(r^v)awithObjCType:(r*)b;
 + (id) valueWithEdgeInsets:({NSEdgeInsets=dddd})a;
 + (void) initialize;
 + (id) allocWithZone:(^{_NSZone=})a;
 + (id) valueWithNonretainedObject:(id)a;
 + (id) valueWithPointer:(r^v)a;

 - ({?=qqC}) ML3CollectionInfoValue;
 - ({?=qq}) ML3NameOrderValue;
 - ({?={?=qiIq}{?=qiIq}}) CMTimeRangeValue;
 - ({?=qiIq}) CMTimeValue;
 - ({?={?={?=qiIq}{?=qiIq}}{?={?=qiIq}{?=qiIq}}}) CMTimeMappingValue;
 - ({CGSize=dd}) CGSizeValue;
 - ({CGVector=dd}) CGVectorValue;
 - ({UIOffset=dd}) UIOffsetValue;
 - ({CGAffineTransform=dddddd}) CGAffineTransformValue;
 - ({UIEdgeInsets=dddd}) UIEdgeInsetsValue;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) CGRectValue;
 - ({CGPoint=dd}) CGPointValue;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) CGRectValue;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) CAMLType;
 - (id) CA_addValue:(id)amultipliedBy:(int)b;
 - (id) CA_interpolateValue:(id)abyFraction:(float)b;
 - (id) CA_roundToIntegerFromValue:(id)a;
 - (double) CA_distanceToValue:(id)a;
 - (id) CA_interpolateValues:(id)ainterpolator:(id)b;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - ({CAPoint3D=ddd}) CAPoint3DValue;
 - ({CATransform3D=dddddddddddddddd}) CATransform3DValue;
 - ({CAColorMatrix=ffffffffffffffffffff}) CAColorMatrixValue;
 - ({CGPoint=dd}) CGPointValue;
 - (Class) classForCoder;
 - ({_NSRange=QQ}) rangeValue;
 - (void) getValue:(^v)a;
 - ({CGSize=dd}) sizeValue;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) rectValue;
 - ({CGPoint=dd}) pointValue;
 - (BOOL) isNSValue__;
 - (BOOL) _matchType:(r*)asize:(unsigned long long)b;
 - (BOOL) isEqualToValue:(id)a;
 - (id) nonretainedObjectValue;
 - ({NSEdgeInsets=dddd}) edgeInsetsValue;
 - (id) replacementObjectForPortCoder:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (r*) objCType;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithBytes:(r^v)aobjCType:(r*)b;
 - (^v) pointerValue;


@end
