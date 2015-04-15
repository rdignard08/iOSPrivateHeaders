
@interface UIToolbarTextButton : UIToolbarButton {

    NSString* _title;
    NSString* _pressedTitle;
    NSSet* _possibleTitles;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - ({UIEdgeInsets=dddd}) alignmentRectInsets;
 - (id) _scriptingInfo;
 - (void) _UIAppearance_setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setTitleTextAttributes:(id)a forState:(unsigned long long)b ;
 - (void) _setPressed:(BOOL)a ;
 - (id) initWithTitle:(id)a pressedTitle:(id)b withFont:(id)c withBarStyle:(long long)d withStyle:(long long)e withTitleWidth:(float)f possibleTitles:(id)g withToolbarTintColor:(id)h ;


@end
