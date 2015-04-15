
@interface UIKeyboardEmojiInputController : NSObject {

    int _currentSequence;
    @"NSMutableDictionary" _usageHistory;
    @"NSMutableArray" _recents;
    @"NSMutableDictionary" _skinToneBaseKeyPreferences;
    int _lastViewedCategory;
}
@property (atomic, assign, readwrite) NSNumber* lastViewedCategory;
 + (void) writeEmojiDefaultsAndReleaseActiveInputView;
 + (Class) classForInputView;
 + (void) writeEmojiDefaults;
 + (id) activeInputView;

 - (void) dealloc;
 - (id) initWithInputView:(id)a;
 - (int) lastViewedCategory;
 - (id) skinToneBaseKeyPreferences;
 - (void) updateSkinToneBaseKey:(id)avariantUsed:(id)b;
 - (void) emojiUsed:(id)a;
 - (id) recents;
 - (void) setLastViewedCategory:(int)a;
 - (double) scoreForSequence:(int)a;
 - (double) scoreForEmoji:(id)a;
 - (BOOL) isAncientSequence:(int)a;
 - (void) clearAncientHistory;
 - (id) defaultsDictionary;


@end
