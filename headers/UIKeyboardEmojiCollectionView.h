
@interface UIKeyboardEmojiCollectionView : UICollectionView {

    UITouch* _activeTouch;
    UIKeyboardEmojiView* _touched;
    UIKeyboardEmojiView* _pendingDisplay;
    UIKeyboardEmojiView* _onDisplay;
    UIKBRenderConfig* _renderConfig;
    UIKeyboardEmojiInputController* _inputController;
    UIView* _pressIndicator;
    UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
    UIResponder* _hitTestResponder;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) renderConfig;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})acollectionViewLayout:(id)brenderConfig:(id)cinputController:(id)demojiGraphicsTraits:(id)e;
 - (void) setHitTestResponder:(id)a;
 - (id) inputController;
 - (id) closestCellForPoint:({CGPoint=dd})a;
 - (id) emojiGraphicsTraits;
 - (id) hitTestResponder;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (double) _currentScreenScale;
 - (id) touched;
 - (void) setTouched:(id)a;
 - (id) activeTouch;
 - (void) setActiveTouch:(id)a;
 - (id) pendingDisplay;
 - (void) setPendingDisplay:(id)a;
 - (id) onDisplay;
 - (void) setOnDisplay:(id)a;
 - (void) setRenderConfig:(id)a;
 - (void) setInputController:(id)a;


@end
