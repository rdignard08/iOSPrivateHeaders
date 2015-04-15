
@interface UIKeyboardEmojiCategory : NSObject {

    int _categoryType;
    NSArray* _emoji;
    long long _lastVisibleFirstEmojiIndex;
    NSString* _displaySymbol;
}
@property (atomic, assign, readwrite) NSNumber* categoryType;
@property (atomic, retain, readwrite) NSArray* emoji;
@property (nonatomic, assign, readwrite) NSNumber* lastVisibleFirstEmojiIndex;
@property (nonatomic, assign, readonly, getter=name) NSString* name;
@property (atomic, assign, readonly, getter=displaySymbol) NSString* displaySymbol;
 + (id) localizedStringForKey:(id)a;
 + (long long) numberOfCategories;
 + (id) categoryForType:(int)a;
 + (id) displayName:(int)a;
 + (id) categories;
 + (BOOL) emojiString:(id)ainGroup:(^I)bwithGroupCount:(int)c;
 + (unsigned long long) hasVariantsForEmoji:(id)a;
 + (id) emojiRecentsFromPreferences;

 - (void) dealloc;
 - (id) name;
 - (id) emoji;
 - (void) setEmoji:(id)a;
 - (void) setCategoryType:(int)a;
 - (int) categoryType;
 - (void) releaseCategories;
 - (long long) lastVisibleFirstEmojiIndex;
 - (void) setLastVisibleFirstEmojiIndex:(long long)a;
 - (id) displaySymbol;


@end
