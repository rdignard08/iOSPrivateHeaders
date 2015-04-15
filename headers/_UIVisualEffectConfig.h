
@interface _UIVisualEffectConfig : NSObject {

    NSMutableArray* _layerConfigs;
    _UIVisualEffectLayerConfig* _contentConfig;
}
@property (nonatomic, assign, readonly) _UIVisualEffectLayerConfig* contentConfig;
@property (nonatomic, assign, readonly) NSArray* layerConfigs;
 + (id) configWithContentConfig:(id)a;
 + (id) configWithLayerConfigs:(id)a;

 - (void) dealloc;
 - (void) addLayerConfig:(id)a ;
 - (void) enumerateLayerConfigs:(@?)a ;
 - (id) layerConfigs;
 - (id) contentConfig;


@end
