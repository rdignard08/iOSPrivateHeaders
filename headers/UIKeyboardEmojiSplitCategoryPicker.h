
@protocol UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {

    UIKeyboardEmojiCategoryController* _categoryController;
    BOOL _whiteText;
    UIColor* _pressIndicatorColor;
    int _currentSelected;
    int _lastUsedCategory;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (BOOL) whiteText;
 - (void) setCategory:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (void) setRenderConfig:(id)a ;
 - (void) receiveNotifictaion:(id)a ;
 - (void) updateCategorySelectedIndicator:(int)a ;
 - (id) titleForRow:(long long)a ;
 - (id) symbolForRow:(long long)a ;
 - (void) setWhiteText:(BOOL)a ;


@end
