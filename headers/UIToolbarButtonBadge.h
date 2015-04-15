
@interface UIToolbarButtonBadge : UIView {

    UIView* _value;
    UIView* _background;
    UIView* _alternate;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({CGSize=dd}) sizeThatFits:({CGSize=dd})a ;
 - (id) initWithValue:(id)a blinks:(BOOL)b ;
 - (void) setBlinks:(BOOL)a ;
 - (void) setValue:(id)a ;


@end
