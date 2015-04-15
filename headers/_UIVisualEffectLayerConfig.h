
@interface _UIVisualEffectLayerConfig : NSObject {

    d _opacity;
    @"NSString" _filterType;
    @"UIColor" _fillColor;
}
@property (nonatomic, assign, readonly) NSNumber* opacity;
@property (nonatomic, assign, readonly) NSString* filterType;
@property (nonatomic, assign, readonly) UIColor* fillColor;
 + (id) layerWithFillColor:(id)aopacity:(d)bfilterType:(id)c;

 - (void) dealloc;
 - (id) filterType;
 - (void) configureLayerView:(id)a;
 - (d) opacity;
 - (id) fillColor;


@end
