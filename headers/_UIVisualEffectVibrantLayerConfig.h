
@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

    UIColor* _vibrantColor;
    UIColor* _tintColor;
}
 + (id) layerWithVibrantColor:(id)atintColor:(id)bfilterType:(id)c;

 - (void) dealloc;
 - (id) tintColor;
 - (void) configureLayerView:(id)a ;
 - (id) vibrantColor;


@end
