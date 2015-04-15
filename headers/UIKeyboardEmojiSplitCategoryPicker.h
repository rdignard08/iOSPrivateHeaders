
@protocol UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {

    @"UIKeyboardEmojiCategoryController" _categoryController;
    BOOL _whiteText;
    @"UIColor" _pressIndicatorColor;
    i _currentSelected;
    i _lastUsedCategory;
}

 - (void) dealloc;
 - (void) didMoveToWindow;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (BOOL) whiteText;
 - (void) setCategory:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) setRenderConfig:(id)a;
 - (void) receiveNotifictaion:(id)a;
 - (void) updateCategorySelectedIndicator:(i)a;
 - (id) titleForRow:(q)a;
 - (id) symbolForRow:(q)a;
 - (void) setWhiteText:(BOOL)a;


@end
