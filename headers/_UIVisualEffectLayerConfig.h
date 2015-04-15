
@interface _UIVisualEffectLayerConfig : NSObject {

    double _opacity;
    NSString* _filterType;
    UIColor* _fillColor;
}
@property (nonatomic, assign, readonly) NSNumber* opacity;
@property (nonatomic, assign, readonly) NSString* filterType;
@property (nonatomic, assign, readonly) UIColor* fillColor;
 + (id) layerWithFillColor:(id)aopacity:(double)bfilterType:(id)c;

 - (void) dealloc;
 - (id) filterType;
 - (void) configureLayerView:(id)a ;
 - (double) opacity;
 - (id) fillColor;


@end
