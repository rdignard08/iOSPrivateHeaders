
@protocol UIKBRenderEffect;
@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {

    NSString* _colorName;
    unsigned long long _edges;
    double _inset;
    double _weight;
    UIKBGradient* _gradient;
    double _opacity;
}
@property (nonatomic, assign, readwrite) NSNumber* edges;
@property (nonatomic, assign, readwrite) NSNumber* inset;
@property (nonatomic, retain, readwrite) UIKBGradient* gradient;
@property (nonatomic, assign, readwrite) NSNumber* opacity;
@property (nonatomic, assign, readonly) NSNumber* isValid;
@property (nonatomic, assign, readonly) NSNumber* renderUnder;
@property (nonatomic, assign, readonly) NSNumber* renderSelector;
@property (nonatomic, assign, readwrite) NSNumber* weight;
 + (id) effectWithColor:(id)aedges:(unsigned long long)binset:(double)cweight:(double)d;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isValid;
 - (BOOL) isEqual:(id)a;
 - (void) setInset:(double)a;
 - (void) setEdges:(unsigned long long)a;
 - (unsigned long long) edges;
 - (double) weight;
 - (id) initWithColor:(id)aedges:(unsigned long long)binset:(double)cweight:(double)d;
 - (double) inset;
 - (BOOL) renderUnder;
 - (SEL) renderSelector;
 - (void) setWeight:(double)a;
 - (^{CGColor=}) CGColor;
 - (id) gradient;
 - (void) setGradient:(id)a;
 - (double) opacity;
 - (void) setOpacity:(double)a;


@end
