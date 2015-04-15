
@interface _UISwitchInfo : NSObject {

    i imageState;
    [8@"UIImage"] images;
    @"UIView" rightEdgeView;
    @"UIView" leftEdgeView;
    d position;
    @"UIColor" onButtonColor;
    @"CALayer" maskLayer;
    {?="on"b1"pressed"b1"useAlternateColors"b1"skipValueChangedAction"b1} _switchFlags;
}

 - (void) dealloc;
 - (void) setMinimumTrackImage:(id)aforStates:(Q)b;


@end
