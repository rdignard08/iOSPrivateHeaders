
@protocol UIKBRenderEffect;
@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

    NSString* _colorName;
    double _weight;
    {CGSize="width"d"height"d} _offset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _insets;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _concaveInsets;
}
@property (nonatomic, assign, readwrite) NSNumber* offset;
@property (nonatomic, assign, readwrite) NSNumber* insets;
@property (nonatomic, assign, readwrite) NSNumber* concaveInsets;
@property (nonatomic, assign, readonly) NSNumber* isValid;
@property (nonatomic, assign, readonly) NSNumber* renderUnder;
@property (nonatomic, assign, readonly) NSNumber* renderSelector;
@property (nonatomic, assign, readwrite) NSNumber* weight;
 + (id) effectWithColor:(id)aoffset:({CGSize=dd})binsets:({UIEdgeInsets=dddd})cweight:(double)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isValid;
 - (BOOL) isEqual:(id)a;
 - (void) setConcaveInsets:({UIEdgeInsets=dddd})a;
 - (double) weight;
 - (BOOL) renderUnder;
 - (SEL) renderSelector;
 - (void) setWeight:(double)a;
 - (id) initWithColor:(id)aoffset:({CGSize=dd})binsets:({UIEdgeInsets=dddd})cweight:(double)d;
 - ({UIEdgeInsets=dddd}) insets;
 - ({UIEdgeInsets=dddd}) concaveInsets;
 - (void) setInsets:({UIEdgeInsets=dddd})a;
 - (^{CGColor=}) CGColor;
 - ({CGSize=dd}) offset;
 - (void) setOffset:({CGSize=dd})a;


@end
