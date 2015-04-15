
@protocol NSCopying;
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {

    float _horizontalPriority;
    float _verticalPriority;
    {CGSize="width"d"height"d} _targetSize;
}
@property (nonatomic, assign, readonly) NSNumber* targetSize;
@property (nonatomic, assign, readonly) NSNumber* horizontalPriority;
@property (nonatomic, assign, readonly) NSNumber* verticalPriority;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (float) horizontalPriority;
 - (float) verticalPriority;
 - ({CGSize=dd}) targetSize;
 - (BOOL) isEqualToTargetInfo:(id)a ;
 - (id) initWithTargetSize:({CGSize=dd})a horizontalPriority:(float)b verticalPriority:(float)c ;


@end
