
@interface UIMovieScrubberTrackOverlayView : UIView {

    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView _leftFillView;
    UIImageView _rightFillView;
    unsigned int _editingHandle;
    b1 _editing;
    b1 _zoomed;
}

 - (void) layoutSubviews;
 - (void) setEditing:(BOOL)a;
 - (void) setMinimumValue:(double)a;
 - (void) setMaximumValue:(double)a;
 - (void) animateFillFramesAway;
 - (void) setStartValue:(double)a;
 - (void) setEditingHandle:(int)a;
 - (void) setEndValue:(double)a;
 - (void) setIsZoomed:(BOOL)a;
 - (void) _clampValueAndLayout;
 - (void) _updateLeftFill;
 - (void) _updateRightFill;
 - (void) setValue:(double)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
