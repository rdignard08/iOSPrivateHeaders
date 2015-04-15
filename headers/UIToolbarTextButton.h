
@interface UIToolbarTextButton : UIToolbarButton {

    @"NSString" _title;
    @"NSString" _pressedTitle;
    @"NSSet" _possibleTitles;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) _scriptingInfo;
 - (void) _UIAppearance_setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setTitleTextAttributes:(id)aforState:(Q)b;
 - (void) _setPressed:(BOOL)a;
 - (id) initWithTitle:(id)apressedTitle:(id)bwithFont:(id)cwithBarStyle:(q)dwithStyle:(q)ewithTitleWidth:(f)fpossibleTitles:(id)gwithToolbarTintColor:(id)h;


@end
