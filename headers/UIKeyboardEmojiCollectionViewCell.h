
@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

    @"UILabel" _emojiLabel;
    @"UIKeyboardEmoji" _emoji;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (id) emoji;
 - (void) setEmoji:(id)a;
 - (void) setEmojiFontSize:(q)a;
 - (q) emojiFontSize;
 - (id) debugDescription;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
