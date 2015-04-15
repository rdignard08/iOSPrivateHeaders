
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
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (BOOL) whiteText;
 - (void) setCategory:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) setRenderConfig:(id)a;
 - (void) receiveNotifictaion:(id)a;
 - (void) updateCategorySelectedIndicator:(int)a;
 - (id) titleForRow:(long long)a;
 - (id) symbolForRow:(long long)a;
 - (void) setWhiteText:(BOOL)a;


@end
