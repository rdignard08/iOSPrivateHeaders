
@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

    id _statisticsDelegate;
    unsigned long long _blurHardEdges;
    double _blurRadius;
}
 + (Class) layerClass;

 - (void) dealloc;
 - (double) blurRadius;
 - (void) setBlurRadius:(double)a;
 - (void) setBlurHardEdges:(unsigned long long)a;
 - (id) _groupName;
 - (void) _setGroupName:(id)a;
 - (id) backdropLayer;
 - (unsigned long long) blurHardEdges;
 - (void) _updateInputBounds;
 - (id) statisticsDelegate;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})asettings:(id)b;
 - (void) setStatisticsDelegate:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) backdropLayerStatisticsDidChange:(id)a;


@end
