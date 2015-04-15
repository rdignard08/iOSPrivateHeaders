
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

    @"UILabel" _emojiSectionHeader;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setHeaderName:(id)a;
 - (void) setHeaderFontSize:(d)a;
 - (void) setHeaderTextColor:(id)a;
 - (void) setHeaderOpacity:(d)a;
 - (void) setUseVibrantBlend:(BOOL)a;
 - (id) headerName;
 - (id) headerTextColor;
 - (d) headerFontSize;
 - (d) headerOpacity;
 - (BOOL) useVibrantBlend;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
