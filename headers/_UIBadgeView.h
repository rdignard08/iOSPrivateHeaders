
@interface _UIBadgeView : UIView {

    UIView* _value;
    UIView* _background;
    UIView* _alternate;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (void) _didChangeFromIdiom:(long long)a onScreen:(id)b traverseHierarchy:(BOOL)c ;
 - (id) initWithValue:(id)a blinks:(BOOL)b ;
 - (void) setBlinks:(BOOL)a ;
 - (void) _updateLabelFont;
 - (void) _updateBackgroundBlinks:(BOOL)a ;
 - (void) setValue:(id)a ;


@end
