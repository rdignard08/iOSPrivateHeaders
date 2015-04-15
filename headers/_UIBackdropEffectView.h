
@interface _UIBackdropEffectView : UIView {

    @"CABackdropLayer" _backdropLayer;
    d _zoom;
}
 + (Class) layerClass;

 - (id) valueForUndefinedKey:(id)a;
 - (void) dealloc;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (id) backdropLayer;
 - (void) setZoom:(d)a;
 - (void) setBackdropLayer:(id)a;
 - (d) zoom;
 - (id) init;
 - (void) backdropLayerStatisticsDidChange:(id)a;


@end
