
@protocol NSCopying;
@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

    q _renditionType;
    [4d] _boundaries;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _destinationRect;
    {?="top"d"left"d"bottom"d"right"d} _edgeInsets;
}
@property (nonatomic, assign, readonly) NSNumber* renditionType;
@property (nonatomic, assign, readonly) NSNumber* destinationRect;
@property (nonatomic, assign, readonly) NSNumber* edgeInsets;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) destinationRect;
 - (d) positionOfSliceBoundary:(Q)a;
 - (id) initWithSliceInformation:(id)adestinationRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (q) renditionType;
 - ({CGSize=dd}) _topLeftCapSize;
 - ({CGSize=dd}) _bottomRightCapSize;
 - (id) initWithRenditionType:(q)adestinationRect:({CGRect={CGPoint=dd}{CGSize=dd}})btopLeftInset:({CGSize=dd})cbottomRightInset:({CGSize=dd})d;
 - ({?=dddd}) edgeInsets;


@end
