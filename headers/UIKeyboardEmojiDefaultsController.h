
@interface UIKeyboardEmojiDefaultsController : NSObject {

    @"NSMutableDictionary" _defaults;
}
 + (id) sharedController;

 - (void) dealloc;
 - (q) emojiCategoryDefaultsIndex:(id)a;
 - (id) emptyDefaultsDictionary;
 - (void) handleWrite:(id)a;
 - (void) handleRead:(id)a;
 - (void) writeEmojiDefaults;
 - (void) readEmojiDefaults;
 - (void) setEmojiCategoryDefaultsIndex:(q)aforCategory:(id)b;
 - (void) setRecentsKey:(id)a;
 - (id) recentsKey;
 - (void) setUsageHistoryKey:(id)a;
 - (id) usageHistoryKey;
 - (void) setSkinToneBaseKeyPreferencesKey:(id)a;
 - (id) skinToneBaseKeyPreferencesKey;
 - (void) setCurrentSequenceKey:(q)a;
 - (q) currentSequenceKey;
 - (void) setDefaultsValue:(id)aforKey:(id)b;
 - (id) defaultsValueForKey:(id)a;
 - (id) init;


@end
