
@protocol UIKeyboardEmojiCategoryControl;
@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

    UIKeyboardEmojiCategoryController* _categoryController;
    int _selected;
    UIView* _scrubView;
    UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
    BOOL _isScrubbing;
    double _scrubStartXLocation;
}

 - (void) dealloc;
 - (id) emojiGraphicsTraits;
 - (void) setCategory:(int)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a keyplane:(id)b key:(id)c ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (long long) selectedIndex;
 - (void) setSelectedIndex:(long long)a ;
 - (void) receiveNotifictaion:(id)a ;
 - (id) scrubView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) categorySelectedCircleRect:(long long)a ;
 - (void) animateScrubberToRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameForDivider:(int)a ;
 - (void) updateCategory;
 - (void) setScrubView:(id)a ;
 - (void) setEmojiGraphicsTraits:(id)a ;


@end
