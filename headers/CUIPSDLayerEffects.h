
@interface CUIPSDLayerEffects : NSObject {

    BOOL _visible;
    d _effectScale;
    @"NSMutableDictionary" _effectList;
}
@property (atomic, assign, readwrite) NSNumber* visible;
@property (atomic, assign, readwrite) NSNumber* effectScale;
@property (atomic, copy, readwrite) NSMutableDictionary* effectList;

 - (void) dealloc;
 - (id) init;
 - (void) setVisible:(BOOL)a;
 - (void) setEffectScale:(d)a;
 - (void) addLayerEffectComponent:(id)a;
 - (id) effectList;
 - (BOOL) visible;
 - (d) effectScale;
 - (id) dropShadow;
 - (void) setEffectList:(id)a;


@end
