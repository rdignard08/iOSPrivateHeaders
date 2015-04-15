
@interface UIKeyboardEmoji : NSObject {

    NSString* _emojiString;
    unsigned long long _variantMask;
}
@property (nonatomic, retain, readwrite) NSString* emojiString;
@property (atomic, assign, readwrite) NSNumber* variantMask;
 + (id) emojiWithString:(id)awithVariantMask:(unsigned long long)b;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (id) emojiString;
 - (unsigned long long) variantMask;
 - (void) setEmojiString:(id)a ;
 - (id) initWithString:(id)a withVariantMask:(unsigned long long)b ;
 - (void) setVariantMask:(unsigned long long)a ;
 - (id) key;


@end
