
@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

    id _statisticsDelegate;
    Q _blurHardEdges;
    d _blurRadius;
}
 + (Class) layerClass;

 - (void) dealloc;
 - (d) blurRadius;
 - (void) setBlurRadius:(d)a;
 - (void) setBlurHardEdges:(Q)a;
 - (id) _groupName;
 - (void) _setGroupName:(id)a;
 - (id) backdropLayer;
 - (Q) blurHardEdges;
 - (void) _updateInputBounds;
 - (id) statisticsDelegate;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})asettings:(id)b;
 - (void) setStatisticsDelegate:(id)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) backdropLayerStatisticsDidChange:(id)a;


@end
