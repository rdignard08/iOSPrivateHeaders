
@interface CUIPSDLayerEffects : NSObject {

    BOOL _visible;
    double _effectScale;
    NSMutableDictionary* _effectList;
}
@property (atomic, assign, readwrite) NSNumber* visible;
@property (atomic, assign, readwrite) NSNumber* effectScale;
@property (atomic, copy, readwrite) NSMutableDictionary* effectList;

 - (void) dealloc;
 - (id) init;
 - (void) setVisible:(BOOL)a;
 - (void) setEffectScale:(double)a;
 - (void) addLayerEffectComponent:(id)a;
 - (id) effectList;
 - (BOOL) visible;
 - (double) effectScale;
 - (id) dropShadow;
 - (void) setEffectList:(id)a;


@end
