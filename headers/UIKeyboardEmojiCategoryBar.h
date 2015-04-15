
@protocol UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

    @"UIKeyboardEmojiCategoryController" _categoryController;
    int _selected;
    @"UIView" _scrubView;
    @"UIKeyboardEmojiGraphicsTraits" _emojiGraphicsTraits;
    BOOL _isScrubbing;
    double _scrubStartXLocation;
}

 - (void) dealloc;
 - (id) emojiGraphicsTraits;
 - (void) setCategory:(int)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (long long) selectedIndex;
 - (void) setSelectedIndex:(long long)a;
 - (void) receiveNotifictaion:(id)a;
 - (id) scrubView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) categorySelectedCircleRect:(long long)a;
 - (void) animateScrubberToRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDivider:(int)a;
 - (void) updateCategory;
 - (void) setScrubView:(id)a;
 - (void) setEmojiGraphicsTraits:(id)a;


@end
