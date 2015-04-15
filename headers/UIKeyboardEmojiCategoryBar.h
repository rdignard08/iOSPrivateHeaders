
@protocol UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

    @"UIKeyboardEmojiCategoryController" _categoryController;
    i _selected;
    @"UIView" _scrubView;
    @"UIKeyboardEmojiGraphicsTraits" _emojiGraphicsTraits;
    BOOL _isScrubbing;
    d _scrubStartXLocation;
}

 - (void) dealloc;
 - (id) emojiGraphicsTraits;
 - (void) setCategory:(i)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})akeyplane:(id)bkey:(id)c;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (q) selectedIndex;
 - (void) setSelectedIndex:(q)a;
 - (void) receiveNotifictaion:(id)a;
 - (id) scrubView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) categorySelectedCircleRect:(q)a;
 - (void) animateScrubberToRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDivider:(i)a;
 - (void) updateCategory;
 - (void) setScrubView:(id)a;
 - (void) setEmojiGraphicsTraits:(id)a;


@end
