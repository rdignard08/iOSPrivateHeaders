
@interface _UIBadgeView : UIView {

    UIView* _value;
    UIView* _background;
    UIView* _alternate;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (void) _didChangeFromIdiom:(long long)aonScreen:(id)btraverseHierarchy:(BOOL)c;
 - (id) initWithValue:(id)ablinks:(BOOL)b;
 - (void) setBlinks:(BOOL)a;
 - (void) _updateLabelFont;
 - (void) _updateBackgroundBlinks:(BOOL)a;
 - (void) setValue:(id)a;


@end
