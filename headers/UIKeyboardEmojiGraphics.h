
@interface UIKeyboardEmojiGraphics : NSObject {

}
 + (id) sharedInstance;
 + (id) emojiCategoryImagePath:(id)a;
 + ({CGSize=dd}) emojiSize:(BOOL)a;
 + ({CGPoint=dd}) padding:(BOOL)a;
 + (id) emojiFontAttributesForPortrait:(BOOL)a;
 + (C) colCount:(BOOL)a;
 + (id) emojiFontAttributes;
 + (C) rowCount:(BOOL)a;
 + ({CGPoint=dd}) margin:(BOOL)a;
 + (d) recentLableVerticalPadding:(BOOL)a;
 + (d) optionalDescriptionPadding:(BOOL)a;
 + (d) emojiPageControlYOffset:(BOOL)a;
 + (BOOL) boldText;

 - (id) init;


@end
