
@interface UIMovieScrubberTrackOverlayView : UIView {

    d _value;
    d _minimumValue;
    d _maximumValue;
    d _startValue;
    d _endValue;
    @"UIImageView" _leftFillView;
    @"UIImageView" _rightFillView;
    I _editingHandle;
    b1 _editing;
    b1 _zoomed;
}

 - (void) layoutSubviews;
 - (void) setEditing:(BOOL)a;
 - (void) setMinimumValue:(d)a;
 - (void) setMaximumValue:(d)a;
 - (void) animateFillFramesAway;
 - (void) setStartValue:(d)a;
 - (void) setEditingHandle:(i)a;
 - (void) setEndValue:(d)a;
 - (void) setIsZoomed:(BOOL)a;
 - (void) _clampValueAndLayout;
 - (void) _updateLeftFill;
 - (void) _updateRightFill;
 - (void) setValue:(d)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
