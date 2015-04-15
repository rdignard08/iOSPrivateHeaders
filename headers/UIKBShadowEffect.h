
@protocol UIKBRenderEffect;
@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

    @"NSString" _colorName;
    d _weight;
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
 + (id) effectWithColor:(id)aoffset:({CGSize=dd})binsets:({UIEdgeInsets=dddd})cweight:(d)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isValid;
 - (BOOL) isEqual:(id)a;
 - (void) setConcaveInsets:({UIEdgeInsets=dddd})a;
 - (d) weight;
 - (BOOL) renderUnder;
 - (SEL) renderSelector;
 - (void) setWeight:(d)a;
 - (id) initWithColor:(id)aoffset:({CGSize=dd})binsets:({UIEdgeInsets=dddd})cweight:(d)d;
 - ({UIEdgeInsets=dddd}) insets;
 - ({UIEdgeInsets=dddd}) concaveInsets;
 - (void) setInsets:({UIEdgeInsets=dddd})a;
 - (^{CGColor=}) CGColor;
 - ({CGSize=dd}) offset;
 - (void) setOffset:({CGSize=dd})a;


@end
