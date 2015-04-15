
@interface UIKeyboardEmojiInputController : NSObject {

    i _currentSequence;
    @"NSMutableDictionary" _usageHistory;
    @"NSMutableArray" _recents;
    @"NSMutableDictionary" _skinToneBaseKeyPreferences;
    i _lastViewedCategory;
}
@property (atomic, assign, readwrite) NSNumber* lastViewedCategory;
 + (void) writeEmojiDefaultsAndReleaseActiveInputView;
 + (Class) classForInputView;
 + (void) writeEmojiDefaults;
 + (id) activeInputView;

 - (void) dealloc;
 - (id) initWithInputView:(id)a;
 - (i) lastViewedCategory;
 - (id) skinToneBaseKeyPreferences;
 - (void) updateSkinToneBaseKey:(id)avariantUsed:(id)b;
 - (void) emojiUsed:(id)a;
 - (id) recents;
 - (void) setLastViewedCategory:(i)a;
 - (d) scoreForSequence:(i)a;
 - (d) scoreForEmoji:(id)a;
 - (BOOL) isAncientSequence:(i)a;
 - (void) clearAncientHistory;
 - (id) defaultsDictionary;


@end
