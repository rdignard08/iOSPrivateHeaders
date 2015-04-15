
@interface UIRemoveControl : UIView {

    UIView* _target;
    id _delegate;
    UIView* _removeConfirmationButton;
    UIRemoveControlMinusButton* _minusButton;
    NSString* _label;
    {?="removeButtonVisible"b1"removeConfirmationVisible"b1"removedFromTargetWhenHidden"b1"disableToggleRotate"b1"alwaysHideRemoveButton"b1"editingStyle"b3"reserved"b23} _removeControlFlags;
}
 + (void) hideAllRemoveConfirmationsInView:(id)a;
 + (float) removeButtonWidth;
 + (BOOL) removeConfirmationsVisibleInView:(id)a;

 - (id) initWithTarget:(id)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setTarget:(id)a;
 - (void) setAlpha:(double)a;
 - (void) layoutSubviews;
 - (id) _interceptEvent:(id)a;
 - (id) _interceptMouseEvent:(^{__GSEvent=})a;
 - (void) _setInterceptMouseEvent:(BOOL)a;
 - (id) _scriptingInfo;
 - (void) setHighlighted:(BOOL)a;
 - (void) isHighlighted;
 - (void) setSelected:(BOOL)a;
 - (void) animator:(id)astopAnimation:(id)b;
 - (BOOL) _isInsertControl;
 - (void) _showDeleteConfirmation:(id)a;
 - (float) _verticalOffsetFromTarget;
 - (void) _doInsert:(id)a;
 - (void) _doRemove:(id)a;
 - (void) addConfirmationButtonSubview:(id)awithWidth:(float)btarget:(id)c;
 - (BOOL) isRemoveConfirmationVisible;
 - (void) _hideRemoveConfirmation;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _removeConfirmationEndingFrame;
 - (BOOL) removedFromTargetWhenHidden;
 - (void) minusButtonDidHide:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) defaultRemoveButtonStartingFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) defaultRemoveButtonEndingFrame;
 - (id) removeConfirmationButton;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) removeButtonStartingFrame;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) removeButtonEndingFrame;
 - (void) _minusButtonFadeAnimationStopped;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) targetContentBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _removeConfirmationStartingFrame;
 - (float) removeButtonAnimationDuration;
 - (void) _confirmationAnimationDidEnd;
 - (void) setRemoveConfirmationVisible:(BOOL)aanimated:(BOOL)b;
 - (void) _setRemoveConfirmationShowing:(BOOL)aanimated:(BOOL)b;
 - (void) _hideRemoveAnimationDone;
 - (void) setRemoveConfirmationLabel:(id)a;
 - (void) setRemoveConfirmationVisible:(BOOL)a;
 - (void) hideControlsUsingRemoveAnimation;
 - (void) _shouldRemoveTarget;
 - (void) setRemovedFromTargetWhenHidden:(BOOL)a;
 - (void) setAlwaysHideRemoveButton:(BOOL)a;
 - (void) showRemoveButton:(BOOL)aanimated:(BOOL)b;
 - (BOOL) isRemoveButtonVisible;
 - (id) removeConfirmationView;
 - (void) setLabel:(id)a;
 - (void) _setInsertControl:(BOOL)a;
 - (void) _setTableViewCellEditingStyle:(long long)a;
 - (id) delegate;
 - (void) removeFromSuperview;


@end
