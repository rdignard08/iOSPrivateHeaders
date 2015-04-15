
@protocol UIKBRenderEffect;
@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {

    @"NSString" _colorName;
    Q _edges;
    d _inset;
    d _weight;
    @"UIKBGradient" _gradient;
    d _opacity;
}
@property (nonatomic, assign, readwrite) NSNumber* edges;
@property (nonatomic, assign, readwrite) NSNumber* inset;
@property (nonatomic, retain, readwrite) UIKBGradient* gradient;
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readonly) NSNumber* isValid;
@property (nonatomic, assign, readonly) NSNumber* renderUnder;
@property (nonatomic, assign, readonly) NSNumber* renderSelector;
@property (nonatomic, assign, readwrite) NSNumber* weight;
 + (id) effectWithColor:(id)aedges:(Q)binset:(d)cweight:(d)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isValid;
 - (BOOL) isEqual:(id)a;
 - (void) setInset:(d)a;
 - (void) setEdges:(Q)a;
 - (Q) edges;
 - (d) weight;
 - (id) initWithColor:(id)aedges:(Q)binset:(d)cweight:(d)d;
 - (d) inset;
 - (BOOL) renderUnder;
 - (SEL) renderSelector;
 - (void) setWeight:(d)a;
 - (^{CGColor=}) CGColor;
 - (id) gradient;
 - (void) setGradient:(id)a;
 - (d) opacity;
 - (void) setOpacity:(d)a;


@end
