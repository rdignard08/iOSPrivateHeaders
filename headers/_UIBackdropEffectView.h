
@interface _UIBackdropEffectView : UIView {

    CABackdropLayer _backdropLayer;
    double _zoom;
}
 + (Class) layerClass;

 - (id) valueForUndefinedKey:(id)a;
 - (void) dealloc;
 - (BOOL) _shouldAnimatePropertyWithKey:(id)a;
 - (id) backdropLayer;
 - (void) setZoom:(double)a;
 - (void) setBackdropLayer:(id)a;
 - (double) zoom;
 - (id) init;
 - (void) backdropLayerStatisticsDidChange:(id)a;


@end
