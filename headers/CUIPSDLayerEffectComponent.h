
@interface CUIPSDLayerEffectComponent : NSObject {

    BOOL _visible;
    NSString _name;
}
@property (atomic, assign, readwrite) NSNumber* visible;
@property (atomic, retain, readwrite) NSString* name;

 - (void) dealloc;
 - (id) name;
 - (void) setName:(id)a;
 - (void) setVisible:(BOOL)a;
 - (BOOL) visible;
 - (BOOL) updateLayerEffectPreset:(id)aerror:(^@)b;
 - (id) initWithEffectFromPreset:(id)aatIndex:(unsigned int)b;
 - (id) _colorFromShapeEffectValue:((?=dQ{_rgbcolor=CCC}sI))a;
 - (unsigned int) effectType;


@end
