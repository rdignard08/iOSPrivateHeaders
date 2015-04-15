
@interface _UITableViewCellSeparatorView : UIView {

    BOOL _drawsWithVibrantLightMode;
    UIView _backgroundView;
    UIView _overlayView;
    UIVisualEffect _separatorEffect;
    UIVisualEffectView _effectView;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setDrawsWithVibrantLightMode:(BOOL)a;
 - (void) setSeparatorEffect:(id)a;
 - (id) separatorEffect;
 - (BOOL) drawsWithVibrantLightMode;


@end
