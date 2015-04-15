
@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

    UILabel* _emojiSectionHeader;
}

 - (void) dealloc;
 - (void) layoutSubviews;
 - (void) setHeaderName:(id)a ;
 - (void) setHeaderFontSize:(double)a ;
 - (void) setHeaderTextColor:(id)a ;
 - (void) setHeaderOpacity:(double)a ;
 - (void) setUseVibrantBlend:(BOOL)a ;
 - (id) headerName;
 - (id) headerTextColor;
 - (double) headerFontSize;
 - (double) headerOpacity;
 - (BOOL) useVibrantBlend;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
