
@interface UIKeyboardEmojiDefaultsController : NSObject {

    @"NSMutableDictionary" _defaults;
}
 + (id) sharedController;

 - (void) dealloc;
 - (long long) emojiCategoryDefaultsIndex:(id)a;
 - (id) emptyDefaultsDictionary;
 - (void) handleWrite:(id)a;
 - (void) handleRead:(id)a;
 - (void) writeEmojiDefaults;
 - (void) readEmojiDefaults;
 - (void) setEmojiCategoryDefaultsIndex:(long long)aforCategory:(id)b;
 - (void) setRecentsKey:(id)a;
 - (id) recentsKey;
 - (void) setUsageHistoryKey:(id)a;
 - (id) usageHistoryKey;
 - (void) setSkinToneBaseKeyPreferencesKey:(id)a;
 - (id) skinToneBaseKeyPreferencesKey;
 - (void) setCurrentSequenceKey:(long long)a;
 - (long long) currentSequenceKey;
 - (void) setDefaultsValue:(id)aforKey:(id)b;
 - (id) defaultsValueForKey:(id)a;
 - (id) init;


@end
