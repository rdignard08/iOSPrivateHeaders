
@protocol UIGestureRecognizerDelegate;
@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate> {

    UIView* _contentView;
    UIView* _backgroundView;
    UIView* _selectedBackgroundView;
    UILongPressGestureRecognizer* _menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    {?="selected"b1"highlighted"b1"showingMenu"b1"clearSelectionWhenMenuDisappears"b1"waitingForSelectionAnimationHalfwayPoint"b1} _collectionCellFlags;
    BOOL _selected;
    BOOL _highlighted;
}
 + (Class) _contentViewClass;

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (BOOL) canPerformAction:(SEL)a withSender:(id)b ;
 - (void) _focusedViewDidChange:(id)a ;
 - (BOOL) shouldChangeFocusedItem:(id)a heading:(unsigned long long)b ;
 - (BOOL) canBecomeFocused;
 - ({CGSize=dd}) systemLayoutSizeFittingSize:({CGSize=dd})a withHorizontalFittingPriority:(float)b verticalFittingPriority:(float)c ;
 - (void) _descendent:(id)a willMoveFromSuperview:(id)b toSuperview:(id)c ;
 - (void) _descendent:(id)a didMoveFromSuperview:(id)b toSuperview:(id)c ;
 - (void) setHighlighted:(BOOL)a ;
 - (BOOL) _gestureRecognizerShouldBegin:(id)a ;
 - (BOOL) isHighlighted;
 - (void) _updateBackgroundView;
 - (BOOL) isSelected;
 - (void) setBackgroundView:(id)a ;
 - (void) prepareForReuse;
 - (void) setSelected:(BOOL)a ;
 - (void) _setOpaque:(BOOL)a forSubview:(id)b ;
 - (id) backgroundView;
 - (void) setSelectedBackgroundView:(id)a ;
 - (void) cut:(id)a ;
 - (void) copy:(id)a ;
 - (void) paste:(id)a ;
 - (void) _menuDismissed:(id)a ;
 - (void) _performAction:(SEL)a sender:(id)b ;
 - (void) _updateHighlightColorsForAnimationHalfwayPoint;
 - (id) selectedBackgroundView;
 - (BOOL) _shouldSaveOpaqueStateForView:(id)a ;
 - (BOOL) _isUsingOldStyleMultiselection;
 - (id) _selectionSegueTemplate;
 - (void) _setSelected:(BOOL)a animated:(BOOL)b ;
 - (void) _setHighlighted:(BOOL)a animated:(BOOL)b ;
 - (void) _updateHighlightColorsForView:(id)a highlight:(BOOL)b ;
 - (void) _setupHighlightingSupport;
 - (void) _teardownHighlightingSupportIfReady;
 - (void) _handleMenuGesture:(id)a ;
 - (void) _setSelectionSegueTemplate:(id)a ;
 - (BOOL) _forwardsSystemLayoutFittingSizeToContentView:(id)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) contentView;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
