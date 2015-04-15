
@interface UIKeyboardEmojiGraphics : NSObject {

}
 + (id) sharedInstance;
 + (id) emojiCategoryImagePath:(id)a;
 + ({CGSize=dd}) emojiSize:(BOOL)a;
 + ({CGPoint=dd}) padding:(BOOL)a;
 + (id) emojiFontAttributesForPortrait:(BOOL)a;
 + (unsigned char) colCount:(BOOL)a;
 + (id) emojiFontAttributes;
 + (unsigned char) rowCount:(BOOL)a;
 + ({CGPoint=dd}) margin:(BOOL)a;
 + (double) recentLableVerticalPadding:(BOOL)a;
 + (double) optionalDescriptionPadding:(BOOL)a;
 + (double) emojiPageControlYOffset:(BOOL)a;
 + (BOOL) boldText;

 - (id) init;


@end
