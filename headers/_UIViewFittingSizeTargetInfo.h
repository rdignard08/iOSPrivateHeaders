
@protocol NSCopying;
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {

    f _horizontalPriority;
    f _verticalPriority;
    {CGSize="width"d"height"d} _targetSize;
}
@property (nonatomic, assign, readonly) NSNumber* targetSize;
@property (nonatomic, assign, readonly) NSNumber* horizontalPriority;
@property (nonatomic, assign, readonly) NSNumber* verticalPriority;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (f) horizontalPriority;
 - (f) verticalPriority;
 - ({CGSize=dd}) targetSize;
 - (BOOL) isEqualToTargetInfo:(id)a;
 - (id) initWithTargetSize:({CGSize=dd})ahorizontalPriority:(f)bverticalPriority:(f)c;


@end
