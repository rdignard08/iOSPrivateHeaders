
@interface UIKeyboardEmoji : NSObject {

    @"NSString" _emojiString;
    Q _variantMask;
}
@property (nonatomic, retain, readwrite) NSString* emojiString;
@property (atomic, assign, readwrite) NSNumber* variantMask;
 + (id) emojiWithString:(id)awithVariantMask:(Q)b;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (id) emojiString;
 - (Q) variantMask;
 - (void) setEmojiString:(id)a;
 - (id) initWithString:(id)awithVariantMask:(Q)b;
 - (void) setVariantMask:(Q)a;
 - (id) key;


@end
