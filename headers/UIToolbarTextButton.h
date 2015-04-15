
@interface UIToolbarTextButton : UIToolbarButton {

    NSString* _title;
    NSString* _pressedTitle;
    NSSet* _possibleTitles;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) _scriptingInfo;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(unsigned long long)b;
 - (void) _setTitleTextAttributes:(id)aforState:(unsigned long long)b;
 - (void) _setPressed:(BOOL)a;
 - (id) initWithTitle:(id)apressedTitle:(id)bwithFont:(id)cwithBarStyle:(long long)dwithStyle:(long long)ewithTitleWidth:(float)fpossibleTitles:(id)gwithToolbarTintColor:(id)h;


@end
